# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:26:21 by tnguyen-          #+#    #+#              #
#    Updated: 2022/06/09 11:20:45 by tnguyen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= canon

SRCS	= main.cpp Fixed.cpp

OBJ	= ${SRCS:.cpp=.o}

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -I.

all: ${NAME}

%.o:%.cpp Fixed.hpp
	${CC} ${FLAGS} -c $< -o $@

${NAME}:    ${OBJ}
	$(CC) ${FLAGS} $(OBJ) -o $(NAME)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
