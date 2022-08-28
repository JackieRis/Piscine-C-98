# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:26:21 by tnguyen-          #+#    #+#              #
#    Updated: 2022/07/27 21:57:23 by tnguyen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Serial

SRCS	= main.cpp Data.cpp

OBJ	= ${SRCS:.cpp=.o}

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -I.

all: ${NAME}

%.o:%.cpp Data.hpp
	${CC} ${FLAGS} -c $< -o $@

${NAME}:    ${OBJ}
	$(CC) ${FLAGS} $(OBJ) -o $(NAME)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
