/*
** format_utils.c for format_utils in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:17:18 2016 Antonin Rapini
** Last update Sun Nov 20 19:05:48 2016 Antonin Rapini
*/

#include "utils.h"

int format_percent(va_list *list, char *s, t_formatspecifier *format)
{
  char	str[1];

  str[0] = '%';
  return (my_putstr_formatted(format, str, 1));
}
