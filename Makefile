##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Make cipher
##

SRC		=	./src/main.c	\
			./src/display_h.c	\
			./src/my_getnbr.c	\
			./src/my_putstr.c	\
			./src/my_strcmp.c	\
			./src/my_putchar.c	\
			./src/error_management.c	\
			./src/prepare_tab.c	\
			./src/encrypt.c	\
			./src/decrypt.c	\
			./src/my_put_nbr.c	\
			./src/calc.c	\
			./src/displayinv.c

CFLAGS	=	-g

OBJ 	= 	$(SRC:.c=.o)

NAME	=	103cipher

$(NAME) : $(OBJ)
		gcc -o $(NAME) $(OBJ)
all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
