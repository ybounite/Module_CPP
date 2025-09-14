NAME = HordeOfZombies

CXX = c++
FLAGS =  -Wall -Wextra -Werror -std=c++98
RM = rm -r

SRC = main.cpp \
      Zombie.cpp \
      zombieHorde.cpp 

OBJ_DIR = obj/

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(FLAGS) -c $< -o $@

clear:
	$(RM) $(OBJ_DIR)

fclear: clear
	$(RM) $(NAME)

re: fclear all
