# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 22:05:06 by hchaguer          #+#    #+#              #
#    Updated: 2024/01/21 22:05:06 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

SRC = main.cpp\
	   Serialization.cpp

OBJ = $(SRC:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
