##
## EPITECH PROJECT, 2021
## MY_LS
## File description:
## No file there , just an epitech header example
##

MAIN = src/main.c

SRC = src/sokoban.c \
	  src/check_file.c \
	  src/utils.c \
	  src/game.c \
	  src/map.c \
	  src/controls.c \
	  src/exe_controls.c

OBJ = $(MAIN:.c=.o) $(SRC:.c=.o)

NAME = my_sokoban
SRC_LIB = -Llib -lmy
CFLAGS += -Wextra -Iinclude -g3

$(NAME): $(OBJ)
	cd lib/my && make
	gcc $(OBJ) $(SRC_LIB) -o./$(NAME) -g3 -lncurses

all: $(NAME)

fclean:
	cd lib/my && make fclean
	make clean
	rm -f $(NAME)
	rm -f u

clean:
	rm -f src/*.o
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf *.c.gcov

re:
	make fclean
	make
