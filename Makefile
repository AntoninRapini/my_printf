##
## Makefile for Makefile in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf
## 
## Made by Antonin Rapini
## Login   <antonin.rapini@epitech.net>
## 
## Started on  Tue Nov  8 15:23:05 2016 Antonin Rapini
## Last update Fri Nov 18 18:48:15 2016 Antonin Rapini
##

SRC	=	utils/my_put_sint.c	\
		utils/my_put_uint.c	\
		utils/my_strcpy.c	\
		utils/my_strlen.c	\
		utils/my_putchar.c	\
		utils/my_putstr.c	\
		utils/my_putnbr_base.c	\
		utils/my_put_ptr.c	\
		utils/my_showstr.c	\
		utils/format_text.c	\
		utils/format_numbers.c	\
		utils/format_utils.c	\
		utils/my_strncmp.c	\
		utils/my_isflag.c	\
		utils/my_strlen.c	\
		utils/my_strdup.c	\
		utils/create_formatting_array.c	\
		my_printf.c

OBJ =		$(SRC:.c=.o)

CFLAGS 	+= -Wall -Wextra
CFLAGS 	+= -I include/
NAME	= libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re : 	fclean all
