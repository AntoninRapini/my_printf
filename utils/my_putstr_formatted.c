/*
** my_put_formatted.c for my_put_formatted in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sat Nov 19 23:42:48 2016 Antonin Rapini
** Last update Sun Nov 20 16:45:26 2016 Antonin Rapini
*/

#include <unistd.h>
#include "format.h"

int	my_putstr_formatted(t_formatspecifier *format, char *arg, int str_size)
{
  int	i;
  int	whitespace;

  whitespace = format->display_size - str_size;
  i = 0;
  if (format->padding == 1)
    {
      write(1, arg, str_size);
      while (i++ < whitespace)
	write(1, " ", 1);
    }
  else
    {
      while (i++ < whitespace)
	write(1, " ", 1);
      write(1, arg, str_size);
    }
  if (whitespace <= 0)
    return (str_size);
  else
    return (str_size + whitespace);
}
