NAME = 

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf 

SRC = main.cpp\
      ClapTrap.cpp\
      FlagTrap.cpp

OBJ_DIR = obj/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all:$(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) - $(NAME) $(OBJ)

$(OBJ_DIR)%.o :%.cpp
	$(CXX) $(FLAGS) - $< - $@

clean:
	$(RM) $(OBJ_DIR)

fclean:
	$(RM) $(NAME)

re: fclean all
