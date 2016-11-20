/*
** format_text.c for format_text in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:11:29 2016 Antonin Rapini
** Last update Sun Nov 20 16:20:08 2016 Antonin Rapini
*/

#include "utils.h"

int	format_char(va_list *list, char *s, t_formatspecifier *format)
{
  char	str[1];

  str[0] = va_arg(*list, int);
  return (my_putstr_formatted(format, str, 1));
}
