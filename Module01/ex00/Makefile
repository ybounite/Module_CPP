NAME = BraiiiiiiinnnzzzZ

FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -r
CXX = c++

SRC = main.cpp \
      Zombie.cpp \
      newZombie.cpp \
      randomChump.cpp

OBJ_DIR = obj/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJ) 

$(OBJ_DIR)%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(FLAGS) -c $< -o $@
	
clean :
	$(RM) $(OBJ_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all
