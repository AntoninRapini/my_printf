/*
** disp_stdarg.c for disp_stdarg in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf_bootstrap
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov  8 15:51:15 2016 Antonin Rapini
** Last update Sun Nov 20 20:22:59 2016 Antonin Rapini
*/

#include <stdarg.h>
#include <stdlib.h>
#include "utils.h"
#include "format.h"

int			my_call_func(va_list *list, char *s, int *str_length, t_format *arr)
{
  int			str_i;
  t_formatspecifier	*formatspecifier;

  str_i = 1;
  formatspecifier = find_formatspecifier(s + str_i);
  if (formatspecifier->display_size != -1)
    {
      while (s[str_i] && !my_isflag(s[str_i]))
	str_i++;
      while ((*arr).key[0])
	{
	  if (my_strncmp((*arr).key, s + str_i, my_strlen((*arr).key)) == 0)
	    {
	      *str_length += (*arr).format_funcptr(list, s + 1, formatspecifier);
	      free(formatspecifier);
	      return (str_i + my_strlen((*arr).key));
	    }
	  arr++;
	}
    }
  free(formatspecifier);
  my_putchar(s[str_i - 1]);
  return (1);
}
