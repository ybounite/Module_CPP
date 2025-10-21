
NAME = GAME

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC_DIR = src
OBJ_DIR = obj

SRC = $(SRC_DIR)/main.cpp\
      $(SRC_DIR)/AMateria.cpp \
      $(SRC_DIR)/Character.cpp \
      $(SRC_DIR)/ICharacter.cpp \
      $(SRC_DIR)/Ice.cpp \
      $(SRC_DIR)/Cure.cpp \
      $(SRC_DIR)/MateriaSource.cpp \
      $(SRC_DIR)/IMateriaSource.cpp


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
