name = losers

SRC = main.cpp\

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98


all : $(name)

$(name) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(name)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(name)

re : fclean all

.PHONY : all clean fclean re