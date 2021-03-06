##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Makefile
##

CFLAGS = -g3 -W -Wall -Wextra -I./include

SRC = src/main.c \
	src/init/init_fridge.c \
	src/init/check_input.c \
	src/init/init_food.c \
	src/init/free.c \
	src/runtime/loop.c \
	src/runtime/parse_command.c \
	src/runtime/addtofridge.c \
	src/runtime/display.c \
	src/runtime/make.c \
	src/runtime/check_cooking.c \
	src/runtime/cooking.c

OBJ = $(SRC:.c=.o)

NAME = fridge

all:  $(NAME) clean

$(NAME): $(OBJ)
	cd src/lib/my/ && make
	cd ../../
	gcc -o $(NAME) $(OBJ) -L./src/lib -lmy

clean:
	cd src/lib/my && make clean
	cd ../../
	rm -f $(OBJ)

fclean: clean
	cd src/lib/my && make fclean
	cd ../../
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re