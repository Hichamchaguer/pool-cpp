# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 16:13:12 by hchaguer          #+#    #+#              #
#    Updated: 2024/02/07 20:59:48 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
 
CXX = c++

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all