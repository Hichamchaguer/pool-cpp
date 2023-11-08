# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 23:52:38 by hchaguer          #+#    #+#              #
#    Updated: 2023/11/06 22:47:46 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = FragTrap

SRC = main.cpp\
		ClapTrap.cpp\
		FragTrap.cpp\

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