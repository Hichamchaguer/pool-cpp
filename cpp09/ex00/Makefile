# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 14:12:54 by hchaguer          #+#    #+#              #
#    Updated: 2024/02/08 17:20:36 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
 
CXX = c++

SRC = main.cpp\
	  BitcoinExchange.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all