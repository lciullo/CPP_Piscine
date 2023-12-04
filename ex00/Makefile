# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 13:18:08 by lciullo           #+#    #+#              #
#    Updated: 2023/12/04 18:47:38 by lisa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ====================== VARIABLES ====================== #

# --- Executable ---

NAME			=	Bureaucrat

# --- Command ---

RM				=	rm -rf

# --- Directories ---

DIR_DEP			=	.dep/

DIR_SRCS 		=	sources/

DIR_INC			=	includes/

# ====================== PATHS ====================== #

# --- List ---

SRCS			=	${DIR_SRCS}main.cpp \
					${DIR_SRCS}Bureaucrat.cpp
				

INC				=	${DIR_INC}Bureaucrat.hpp 
				
# --- Paths ---

OBJ				=	${patsubst %.cpp, ${DIR_DEP}%.o, ${SRCS}}

DEP				=	${patsubst %.cpp, ${DIR_DEP}%.d, ${SRCS}}
				 
# ====================== FLAGS ====================== #

FLAGS			=	-Wall -Wextra -Werror -fsanitize=address -g3 -I ${DIR_INC}

CPP				=	c++ -std=c++98

DEP_FLAGS		=	-MMD -MP

# ====================== RULES ====================== #

all:			${NAME}

${NAME}:		${OBJ}
				${CPP} ${FLAGS} -o ${NAME} ${OBJ}

-include ${DEP}

${DIR_DEP}%.o: %.cpp
				mkdir -p $(shell dirname $@)
				${CPP} ${FLAGS} ${DEP_FLAGS} -I ${DIR_INC} -c $< -o $@

clean:
				${RM} ${DIR_DEP}

fclean: clean
				${RM} ${NAME}

re:				fclean
				${MAKE} all

.PHONY :		all clean fclean re