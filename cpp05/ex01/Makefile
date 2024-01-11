# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 19:28:13 by hchaguer          #+#    #+#              #
#    Updated: 2024/01/10 22:05:07 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRC = Bureaucrat.cpp\
	  Form.cpp\
	  main.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98


all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re