/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Algorithm.tpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:20:59 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/16 10:21:00 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//==========================================================================================
//                                 FORD-JOHNSON ALGORITHM                                 //
//==========================================================================================

template <typename T, typename P>
P splitAndPair(T& container) 
{
	P pairsVector;
	int len = container.size();
	int i = 0;
	if (len % 2 == 0)
		;
	else
		len = len - 1;
	while (i < len) 
	{
		if (container[i] > container[i + 1])
			pairsVector.push_back(std::make_pair(container[i], container[i + 1]));
		else
			pairsVector.push_back(std::make_pair(container[i + 1], container[i]));
		i += 2;
	}
	if (container.size() % 2 == 1)
		pairsVector.push_back(std::make_pair(container.back(), -1));
	return (pairsVector);
}


template <typename P>
void    splitContainer(P& container1, P& container2, P& container3)
{
	typename    P::iterator it;
	int                     i = 0;
	int                     len = container1.size();

	for (it = container1.begin(); it != container1.end(); ++it)
	{
		if (i < len / 2)
			container2.push_back(*it);
		else
			container3.push_back(*it);
		i++;
	}
}


template <typename P>
P   sortLargest(P& container)
{
	P   ret;
	P   container1;
	P   container2;

	splitContainer(container, container1, container2);
	if (!(container1.size() < 2 && container2.size() < 2)) 
	{
		container1 = sortLargest(container1);
		container2 = sortLargest(container2);
	}
   	std::merge(container1.begin(), container1.end(), container2.begin(), container2.end(), std::back_inserter(ret));
	return (ret);
}

template <typename T, typename P>
void    getSmallestLargest(P& pair, T& largest, T& smallest)
{
	typename P::iterator    it;

	for (it = pair.begin(); it != pair.end(); ++it) 
	{
		largest.push_back(it->first);
		smallest.push_back(it->second);
	}
	return ;
}

int generateSequenceTerm(int n, int prev);


template <typename T>
T sizeOfGroups(T& smallest)
{
	T		res;
	
	size_t	n = 0;
	int		nb = 2;
	int		prev = 0;
	size_t	check = 0;
	size_t	len = smallest.size();
	while (n < len)
	{
		prev = nb;
		nb = 0;
		nb = generateSequenceTerm(n, prev);
		while (check + nb > len)
			nb--;
		res.push_back(nb);
		check += nb;
		n++;
		if (check >= len)
			break ;
	}
	return (res);
}


template <typename T>
T getIndexContainer(T& smallest, T& suite)
{
	T res;
	res = smallest;
	int size = 0;
	int index = 0;
	int check = 0;
	int i = 0;
	typename T::iterator it;
	for (it = suite.begin(); it != suite.end(); it++)
	{
		check = *it;
		for (size = 0; size < check; size++)
		{
			res[index + size] = index + suite[i] - size - 1;
		}
		i++;
		index += size; 
	}
	return (res);
}


template <typename T>
void insertSmallestInLargest(const T& smallest, T& largest, T& index) 
{
	for (int i = 0; i < static_cast<int>(index.size()); ++i) {
		if (index[i] < static_cast<int>(largest.size())) 
		{
			typename T::iterator it = std::lower_bound(largest.begin(), largest.end(), smallest[i]);
			largest.insert(it, smallest[i]);
		}
	}
}


template <typename T, typename P>
T   sort(T& first)
{
	P contPair;
	T largest;
	T smallest;
	T suite;
	T index;
	
	contPair = splitAndPair< T, P >(first);
	contPair = sortLargest< P >(contPair);
	getSmallestLargest<T, P>(contPair, largest, smallest);
	largest.insert(largest.begin(), smallest[0]);
	if (!smallest.empty()) 
		smallest.erase(smallest.begin());
	suite = sizeOfGroups< T>(smallest);
	index = getIndexContainer(smallest, suite);
	insertSmallestInLargest(smallest, largest, index);
	if (largest[0] == -1)
		largest.erase(largest.begin());
	return (largest);
}