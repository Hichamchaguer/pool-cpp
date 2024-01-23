# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 22:05:16 by hchaguer          #+#    #+#              #
#    Updated: 2024/01/23 11:47:56 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Base

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

SRC = main.cpp\
	  Base.cpp

OBJ = $(SRC:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
