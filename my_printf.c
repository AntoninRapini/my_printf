/*
** disp_stdarg.c for disp_stdarg in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf_bootstrap
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov  8 15:51:15 2016 Antonin Rapini
** Last update Fri Nov 18 21:27:56 2016 Antonin Rapini
*/

#include <stdarg.h>
#include "utils.h"
#include <stdint.h>
#include "format.h"
#include <stdlib.h>

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
      if(*s == '%' && *(s + 1))
	s += call_func(&list, s, &str_length, arr);
      else
	{
	  str_length += my_putchar(*s);
	  s++;
	}
    }
  va_end(list);
  return (str_length);
}

int	call_func(va_list *list, char *s, int *str_length, t_format *arr)
{
  int	str_i;

  str_i = 1;
  while (s[str_i] && !my_isflag(s[str_i]))
    str_i++;
  while ((*arr).key[0])
    {
      if (my_strncmp((*arr).key, s + str_i, my_strlen((*arr).key)) == 0)
	{
	  *str_length += (*arr).format_funcptr(list, s + 1);
	  return (str_i + my_strlen((*arr).key));
	}
      arr++;
    }
  my_putchar(s[str_i - 1]);
  return (1);
}
