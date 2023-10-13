# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 14:46:28 by hchaguer          #+#    #+#              #
#    Updated: 2023/10/13 15:24:33 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = phonebook

SRC = PhoneBook.cpp\
		main.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

CC = c++

all : $(name)

$(name) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(name)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(name)
 
re : fclean all

.PHONY : all clean fclean re
