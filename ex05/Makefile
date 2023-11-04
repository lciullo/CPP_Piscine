# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 12:41:46 by lciullo           #+#    #+#              #
#    Updated: 2023/11/04 21:29:17 by lisa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ====================== VARIABLES ====================== #

NAME		=	Harl

RM			=	rm -rf

# --- Directories ---

DIR_SRCS	=	sources/

DIR_INC		=	includes/

DIR_OBJS	=	.objs/

# ====================== PATHS ====================== #

SRCS		=	${DIR_SRCS}main.cpp \
				${DIR_SRCS}Harl.cpp


INC			=	${DIR_INC}Harl.hpp 

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