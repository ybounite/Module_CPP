NAME = BRAIN

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC_DIR = src
OBJ_DIR = obj

SRC = $(SRC_DIR)/main.cpp\
      $(SRC_DIR)/Animal.cpp \
      $(SRC_DIR)/Cat.cpp \
      $(SRC_DIR)/Dog.cpp \
      $(SRC_DIR)/Brain.cpp

OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
