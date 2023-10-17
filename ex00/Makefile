# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 09:26:02 by lciullo           #+#    #+#              #
#    Updated: 2023/10/17 09:29:52 by lciullo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Variables ---

NAME		=	megaphone

RM			=	rm -rf

# --- Directories ---

DIR_SRCS	=	sources/

DIR_OBJS	=	.objs/

# --- Paths ---

SRCS		=	${DIR_SRCS}megaphone.cpp

OBJS		=	${patsubst %.cpp, ${DIR_OBJS}%.o, ${SRCS}}

# --- Flags ---

CPP			=	c++ -std=c++98

CFLAGS		=	-Wall -Wextra -Werror

# --- Rules ---

.PHONY :		all clean fclean re watermark

all :	 		${NAME}

%.o: %.cpp		
				$(CPP) $(CFLAGS) -c $< -o $@

${DIR_OBJS}%.o: %.cpp
				@mkdir -p ${shell dirname $@}
				${CPP} ${CFLAGS} -c $< -o $@

${NAME}:		${OBJS}
				$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
				${RM} ${OBJS} ${DIR_OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all