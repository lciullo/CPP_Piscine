# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 11:02:03 by lciullo           #+#    #+#              #
#    Updated: 2023/11/16 11:02:03 by lciullo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ====================== VARIABLES ====================== #

NAME		=	FragTrap

RM			=	rm -rf

# --- Directories ---

DIR_SRCS	=	sources/

DIR_INC		=	includes/

DIR_OBJS	=	.objs/

# ====================== PATHS ====================== #

SRCS		=	${DIR_SRCS}main.cpp \
				${DIR_SRCS}ScavTrap.cpp \
				${DIR_SRCS}ClapTrap.cpp \
				${DIR_SRCS}FragTrap.cpp 

INC			=	${DIR_INC}ClapTrap.hpp \
				${DIR_INC}ScavTrap.hpp \
				${DIR_INC}FragTrap.hpp 

OBJS		=	${patsubst %.cpp, ${DIR_OBJS}%.o, ${SRCS}}

# ====================== FLAGS ====================== #

CPP			=	c++ -std=c++98

CFLAGS		=	-Wall -Wextra -Werror -g3 -I ${DIR_INC}

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