# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 19:28:13 by hchaguer          #+#    #+#              #
#    Updated: 2024/01/09 18:42:57 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRC = Bureaucrat.cpp\
	  Form.cpp\
	  main.cpp\
	  PresidentialPardonForm.cpp\
	  RobotomyRequestForm.cpp\
	  ShrubberyCreationForm.cpp\
	  Intern.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror


all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re