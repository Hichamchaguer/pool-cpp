# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 14:46:28 by hchaguer          #+#    #+#              #
#    Updated: 2023/11/06 16:38:57 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = phonebook

SRC = PhoneBook.cpp\
		contact.cpp\
		main.cpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

CXX = c++

all : $(name)

$(name) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(name)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(name)
 
re : fclean all

.PHONY : all clean fclean re
