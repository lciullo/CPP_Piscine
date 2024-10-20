/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:46:24 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/14 14:55:47 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	{
		std::cout << BLUE << "=======================" << RESET << std::endl;
		std::cout << BLUE << "int test" << RESET << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "Top element: " << mstack.top() << std::endl;
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.pop();
		std::cout << "Top element: " << mstack.top() << std::endl;
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		std::cout << BLUE << "=======================" << RESET << std::endl;
		std::cout << BLUE << "String test" << RESET << std::endl;
		MutantStack<std::string> mstack;
		mstack.push("Hello");
		mstack.push("Hola");
		std::cout << "Top element: " << mstack.top() << std::endl;
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.pop();
		std::cout << "Top element: " << mstack.top() << std::endl;
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.push("je");
		mstack.push("suis");
		mstack.push("Lisa");
		mstack.push("!");
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		std::cout << BLUE << "=======================" << RESET << std::endl;
		std::cout << BLUE << "List test" << RESET << std::endl;
		std::list<int> mlist;
		MutantStack<int> mstack;
		mlist.push_back(5);
		mstack.push(5);
		mlist.push_back(17);
		mstack.push(17);
		std::cout << "MutantStack top element: " << mstack.top() << std::endl;
		std::cout << "MutantStack size: " << mstack.size() << std::endl;
		std::cout << "List top element: " << mlist.back() << std::endl;
		std::cout << "List size: " << mlist.size() << std::endl;
		mstack.pop();
		mlist.pop_back();
		std::cout << "MutantStack top element: " << mstack.top() << std::endl;
		std::cout << "MutantStack size: " << mstack.size() << std::endl;
		std::cout << "List top element: " << mlist.back() << std::endl;
		std::cout << "List size: " << mlist.size() << std::endl;
		mlist.push_back(3);
		mstack.push(3);
		mlist.push_back(5);
		mstack.push(5);
		mlist.push_back(737);
		mstack.push(737);
		mlist.push_back(0);
		mstack.push(0);
		MutantStack<int>::iterator its = mstack.begin();
		std::list<int>::iterator itl = mlist.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++its;
		--its;
		++itl;
		--itl;
		while (its != ite)
		{
			std::cout << *its << " | " << *itl << std::endl;
			++its;
			++itl;
		}
	}
	return (0);
}
