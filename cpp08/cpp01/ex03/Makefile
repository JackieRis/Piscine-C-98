# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:26:21 by tnguyen-          #+#    #+#              #
#    Updated: 2022/05/13 11:59:27 by tnguyen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= violence

SRCS	= src/main.cpp src/Weapon.cpp src/HumanA.cpp src/HumanB.cpp

OBJ	= ${SRCS:.cpp=.o}

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -I.

all: ${NAME}

%.o:%.cpp headers/Weapon.hpp headers/HumanA.hpp headers/HumanB.hpp
	${CC} ${FLAGS} -c $< -o $@

${NAME}:    ${OBJ}
	$(CC) ${FLAGS} $(OBJ) -o $(NAME)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
