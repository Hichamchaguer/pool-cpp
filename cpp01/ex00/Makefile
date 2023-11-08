# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 15:31:17 by hchaguer          #+#    #+#              #
#    Updated: 2023/11/06 17:11:22 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = BraiiiiiiinnnzzzZ

SRC = main.cpp\
	Zombie.cpp\
    newZombie.cpp\
	randomChump.cpp

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