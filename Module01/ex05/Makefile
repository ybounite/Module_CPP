NAME = 

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -r

SRC = main.cpp \
      Harl.cpp

OBJ_DIR = obj/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))


all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(FCLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
