/*
** format_numbers.c for format_numbers in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 12:36:27 2016 Antonin Rapini
** Last update Sun Nov 20 17:58:30 2016 Antonin Rapini
*/

#include "utils.h"

int	format_uint(va_list *list, char *s, t_formatspecifier *format)
{
  return (my_put_uint_formatted(format, va_arg(*list, unsigned int)));
}
