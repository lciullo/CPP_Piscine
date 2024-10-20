# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 11:39:31 by lciullo           #+#    #+#              #
#    Updated: 2023/12/12 12:50:46 by lciullo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ====================== VARIABLES ====================== #

# --- Executable ---

NAME			=	array

# --- Command ---

RM				=	rm -rf

# --- Directories ---

DIR_DEP			=	.dep/

DIR_SRCS 		=	sources/

DIR_INC			=	includes/

# ====================== PATHS ====================== #

# --- List ---

SRCS			=	${DIR_SRCS}main.cpp 
				

INC				=	${DIR_INC}Array.hpp \
					${DIR_INC}Array.tpp
				
# --- Paths ---

OBJ				=	${patsubst %.cpp, ${DIR_DEP}%.o, ${SRCS}}

DEP				=	${patsubst %.cpp, ${DIR_DEP}%.d, ${SRCS}}
				 
# ====================== FLAGS ====================== #

FLAGS			=	-Wall -Wextra -Werror -g3 -I ${DIR_INC}

CPP				=	c++ -std=c++98

DEP_FLAGS		=	-MMD -MP

# ====================== RULES ====================== #

all:			${NAME}

${NAME}:		${OBJ}
				${CPP} ${FLAGS} -o ${NAME} ${OBJ}

-include ${DEP}

${DIR_DEP}%.o: %.cpp
				mkdir -p $(shell dirname $@)
				${CPP} ${FLAGS} ${DEP_FLAGS} -c $< -o $@

clean:
				${RM} ${DIR_DEP}

fclean: clean
				${RM} ${NAME}

re:				fclean
				${MAKE} all

.PHONY :		all clean fclean re