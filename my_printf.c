/*
** disp_stdarg.c for disp_stdarg in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf_bootstrap
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov  8 15:51:15 2016 Antonin Rapini
** Last update Sun Nov 20 20:15:33 2016 Antonin Rapini
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include "utils.h"
#include "format.h"

int		my_printf(char *s, ...)
{
  va_list	list;
  int		str_length;
  t_format	*arr;

  arr = create_formatting_array();
  str_length = 0;
  va_start(list, s);
  while (*s)
    {
      if (*s == '%' && *(s + 1))
	s += my_call_func(&list, s, &str_length, arr);
      else
	{
	  str_length += my_putchar(*s);
	  s++;
	}
    }
  va_end(list);
  return (str_length);
}
