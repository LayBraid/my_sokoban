##
## EPITECH PROJECT, 2021
## MY_LS
## File description:
## No file there , just an epitech header example
##

SRC = $(wildcard src/*.c)

OBJ = $(MAIN:.c=.o) $(SRC:.c=.o)

NAME = my_sokoban
SRC_LIB = -Llib -lmy
CFLAGS += -Wextra -Iinclude -g3

$(NAME): $(OBJ)
	cd lib/my && make
	gcc $(OBJ) $(SRC_LIB) -o./$(NAME) -g3 -lncurses

.PHONY: all
all: $(NAME)

.PHONY: fclean
fclean:
	cd lib/my && make fclean
	make clean
	rm -f $(NAME)
	rm -f u

.PHONY: clean
clean:
	rm -f src/*.o
	rm -f src/controls/*.o
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf *.c.gcov

.PHONY: re
re:
	make fclean
	make
