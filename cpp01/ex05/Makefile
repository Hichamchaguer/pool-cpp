# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 11:54:15 by hchaguer          #+#    #+#              #
#    Updated: 2023/11/06 17:51:52 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = Harl2.0

SRC = main.cpp\
	  Harl.cpp

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