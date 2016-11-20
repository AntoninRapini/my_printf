##
## Makefile for Makefile in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf
## 
## Made by Antonin Rapini
## Login   <antonin.rapini@epitech.net>
## 
## Started on  Tue Nov  8 15:23:05 2016 Antonin Rapini
## Last update Sun Nov 20 18:52:24 2016 Antonin Rapini
##

SRC	=	utils/my_put_sint.c	\
		utils/my_put_uint.c	\
		utils/my_putnbr_base.c	\
		utils/my_put_ptr.c	\
		utils/my_putstr.c	\
		utils/my_putchar.c	\
		utils/my_showstr.c	\
		utils/my_strcpy.c	\
		utils/my_strlen.c	\
		utils/my_getnbr.c	\
		utils/my_isnum.c	\
		utils/my_strncmp.c	\
		utils/my_isflag.c	\
		utils/my_strlen.c	\
		utils/find_formatspecifier.c	\
		utils/my_strdup.c	\
		utils/my_call_func.c	\
		utils/my_putstr_formatted.c	\
		utils/my_putnbr_base_formatted.c	\
		utils/my_put_sint_formatted.c	\
		utils/my_put_uint_formatted.c	\
		utils/my_put_ptr_formatted.c	\
		utils/my_nbrlen_base.c		\
		utils/my_nbrlen.c		\
		utils/my_ptrlen.c		\
		utils/create_formatting_array.c	\
		utils/formats/format_binary.c	\
		utils/formats/format_char.c	\
		utils/formats/format_chexa.c	\
		utils/formats/format_hexa.c	\
		utils/formats/format_octal.c	\
		utils/formats/format_percent.c	\
		utils/formats/format_ptr.c	\
		utils/formats/format_showstring.c	\
		utils/formats/format_sint.c	\
		utils/formats/format_string.c	\
		utils/formats/format_uint.c	\
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
