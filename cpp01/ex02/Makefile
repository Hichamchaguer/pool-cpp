
name = Brain

SRC = main.cpp\

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