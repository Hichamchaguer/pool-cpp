# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 17:13:11 by hchaguer          #+#    #+#              #
#    Updated: 2024/02/04 09:41:18 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

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