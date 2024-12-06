NAME = DiamondTrap

# -Wshadow/-Wno-shadow: enables/disables warnings when a variable in a
# nested scope or inner block has the same name as a variable in an outer
# scope which leads to shadowing (local variable in an inner block/function
# hides (shadows) a variable in an outer block or base class with the same name
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

OBJ =  $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

