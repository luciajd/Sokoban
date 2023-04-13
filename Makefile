##
## EPITECH PROJECT, 2022
## MAKE_FILE
## File description:
## MakeFile
##

SRC		=	$(wildcard sokoban_lib/*.c) \
			$(wildcard *.c) \
			src/main.c

OBJ		= 	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	= 	-Werror -Wextra	-Wshadow -I./include

SOKOBAN_FLAGS	=	-lncurses

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(SOKOBAN_FLAGS) $(CFLAGS)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
