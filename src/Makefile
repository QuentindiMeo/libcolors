##
## PERSONAL PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	print_default2.c	\
		print_default.c		\
		print_cyan.c		\
		print_magenta.c		\
		print_blue.c		\
		print_yellow.c		\
		print_green.c		\
		print_red.c		\
		print_white.c		\
		print_colors.c		\
		my_putchar.c		\
		my_putstr.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libcolors.a

all:    $(NAME)

$(NAME):        $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo Libcolors compiled successfully

clean:
	@rm -f $(OBJ)
	@echo Cleaned .o for libcolors

fclean:
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@echo Cleaned \'$(NAME)\'

re:     fclean all
