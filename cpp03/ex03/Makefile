# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 02:34:05 by hchaguer          #+#    #+#              #
#    Updated: 2023/11/06 22:48:00 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = DiamondTrap

SRC = main.cpp\
		ClapTrap.cpp\
		DiamondTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp

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