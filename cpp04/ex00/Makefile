# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 06:26:44 by hchaguer          #+#    #+#              #
#    Updated: 2023/11/13 08:20:54 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = Animal

SRC = main.cpp\
	   Animal.cpp\
	   Cat.cpp\
	   Dog.cpp\
	   WrongAnimal.cpp\
	   WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(name)

$(name) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(name)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(name)

re : fclean all

.PHONY : all clean fclean re