# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 10:59:48 by lciullo           #+#    #+#              #
#    Updated: 2023/11/21 13:21:10 by lciullo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ====================== VARIABLES ====================== #

NAME		=	Ideas

RM			=	rm -rf

# --- Directories ---

DIR_SRCS	=	sources/

DIR_INC		=	includes/

DIR_OBJS	=	.objs/

# ====================== PATHS ====================== #

SRCS		=	${DIR_SRCS}main.cpp \
				${DIR_SRCS}Basic/Animal.cpp \
				${DIR_SRCS}Basic/Cat.cpp \
				${DIR_SRCS}Basic/Dog.cpp \
				${DIR_SRCS}Basic/Brain.cpp \
				${DIR_SRCS}Wrong/WrongAnimal.cpp \
				${DIR_SRCS}Wrong/WrongCat.cpp
				

INC			=	${DIR_INC}Basic/Animal.hpp \
				${DIR_INC}Basic/Cat.hpp \
				${DIR_INC}Basic/Dog.hpp \
				${DIR_INC}Basic/Brain.hpp \
				${DIR_INC}Wrong/WrongAnimal.hpp \
				${DIR_INC}Wrong/WrongCat.hpp 
				 

OBJS		=	${patsubst %.cpp, ${DIR_OBJS}%.o, ${SRCS}}

# ====================== FLAGS ====================== #

CPP			=	c++ -std=c++98

CFLAGS		=	-Wall -Wextra -Werror -g3 -I ${DIR_INC}Basic -I ${DIR_INC}Wrong

# ====================== RULES ====================== #

all :	 		${NAME}

${DIR_OBJS}%.o: %.cpp ${INC}
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