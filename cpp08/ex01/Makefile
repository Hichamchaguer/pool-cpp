# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 15:18:05 by hchaguer          #+#    #+#              #
#    Updated: 2024/02/06 18:08:23 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
 
CXX = c++

SRC = main.cpp\
	  Span.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all