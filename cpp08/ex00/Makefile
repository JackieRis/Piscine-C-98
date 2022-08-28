# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:26:21 by tnguyen-          #+#    #+#              #
#    Updated: 2022/08/25 00:15:31 by tnguyen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= easyFind

SRCS	= main.cpp easyfind.cpp

OBJ	= ${SRCS:.cpp=.o}

CC = c++

FLAGS = -fsanitize=address -Wall -Werror -Wextra -std=c++98 -I.

all: ${NAME}

%.o:%.cpp easyfind.hpp
	${CC} ${FLAGS} -c $< -o $@

${NAME}:    ${OBJ}
	$(CC) ${FLAGS} $(OBJ) -o $(NAME)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
