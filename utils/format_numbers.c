/*
** format_numbers.c for format_numbers in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 12:36:27 2016 Antonin Rapini
** Last update Fri Nov 18 13:48:54 2016 Antonin Rapini
*/

#include "utils.h"

int	format_sint(va_list *list, char *s)
{
  return (my_put_sint(va_arg(*list, int), *(s - 1) == '+'));
}

int	format_uint(va_list *list, char *s)
{
  return (my_put_uint(va_arg(*list, unsigned int)));
}
 

int	format_octal(va_list *list, char *s)
{
  return (my_putnbr_base(va_arg(*list, unsigned int), "01234567", *(s - 1) == '#'));
}


int	format_hexa(va_list *list, char *s)
{
  return (my_putnbr_base(va_arg(*list, unsigned int), "0123456789abcdef", *(s - 1) == '#'));
}


int	format_chexa(va_list *list, char *s)
{
  return (my_putnbr_base(va_arg(*list, unsigned int), "0123456789ABCDEF", *(s - 1) == '#'));
}
