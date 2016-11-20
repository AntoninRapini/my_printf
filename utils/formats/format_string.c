/*
** format_string.c for format_text in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:11:29 2016 Antonin Rapini
** Last update Sun Nov 20 19:07:02 2016 Antonin Rapini
*/

#include "utils.h"

int	format_string(va_list *list, char *s, t_formatspecifier *format)
{
  char	*arg;
  int	str_size;

  arg = va_arg(*list, char *);
  str_size = my_strlen(arg);
  if (format->arg_size != -1 && format->arg_size < str_size)
    str_size = format->arg_size;
  return (my_putstr_formatted(format, arg, str_size));
}
