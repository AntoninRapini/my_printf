##
## Makefile for Makefile in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf
## 
## Made by Antonin Rapini
## Login   <antonin.rapini@epitech.net>
## 
## Started on  Tue Nov  8 15:23:05 2016 Antonin Rapini
## Last update Sun Nov 13 21:28:26 2016 Antonin Rapini
##

SRC	=	utils/my_put_sint.c	\
		utils/my_put_uint.c	\
		utils/my_strlen.c	\
		utils/my_putchar.c	\
		utils/my_putstr.c	\
		utils/my_putnbr_base.c	\
		utils/my_put_ptr.c	\
		utils/my_showstr.c	\
		my_printf.c		\
		test.c

CFLAGS 	+= -Wall -Wextra

NAME	= test

all: $(NAME)

$(NAME):
	gcc $(SRC) -I include/

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re : 	fclean all
