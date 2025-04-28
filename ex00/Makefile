

# Colors for output
GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
RESET = \033[0m

# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Files
NAME = brainz

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(NAME) $(GREEN) Built Succesfully$(RESET)"

clean:
	rm -f $(OBJ)
	@echo "$(YELLOW)🧹 Object files cleaned.$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED) Executable $(NAME) removed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re