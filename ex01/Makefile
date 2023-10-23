# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 12:59:38 by lciullo           #+#    #+#              #
#    Updated: 2023/10/23 14:37:37 by lciullo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ====================== VARIABLES ====================== #

NAME		=	phonebook

RM			=	rm -rf

# --- Directories ---

DIR_SRCS	=	sources/

DIR_INC		=	includes/

DIR_OBJS	=	.objs/


# ====================== PATHS ====================== #

SRCS		=	${DIR_SRCS}main.cpp \
				${DIR_SRCS}Contact.cpp \
				${DIR_SRCS}PhoneBook.cpp

INC			=	${DIR_INC}PhoneBook.hpp \
				${DIR_INC}Contact.hpp

OBJS		=	${patsubst %.cpp, ${DIR_OBJS}%.o, ${SRCS}}

# ====================== FLAGS ====================== #

CPP			=	c++ -std=c++98

CFLAGS		=	-Wall -Wextra -Werror -g3 -I ${DIR_INC}

# ====================== RULES ====================== #

all :	 		${NAME}

%.o: %.cpp		
				${CPP} ${CFLAGS} -c $< -o $@

${DIR_OBJS}%.o: %.cpp
				@mkdir -p ${shell dirname $@}
				${CPP} ${CFLAGS} -c $< -o $@

${NAME}:		${OBJS}
				${CPP} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
				${RM} ${OBJS} ${DIR_OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY :		all clean fclean re