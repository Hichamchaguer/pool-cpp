# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 15:50:30 by hchaguer          #+#    #+#              #
#    Updated: 2023/11/03 15:50:30 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


name = Fixed

SRC = main.cpp\
	  Fixed.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(name)

$(name) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(name)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(name)

re : fclean all

.PHONY : all clean fclean re