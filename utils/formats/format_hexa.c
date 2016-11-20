/*
** format_numbers.c for format_numbers in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 12:36:27 2016 Antonin Rapini
** Last update Sun Nov 20 18:14:56 2016 Antonin Rapini
*/

#include "utils.h"

int	format_hexa(va_list *list, char *s, t_formatspecifier *format)
{
  int	verbose;

  while (!my_isnum(*s) && !my_isflag(*s) && *s != '#')
    s++;
  if (*s == '#')
    verbose = 2;
  else
    verbose = 0;
  return (my_putnbr_base_formatted
	  (format ,"0123456789abcdef", va_arg(*list, unsigned int), verbose));
}
