/*
** disp_stdarg.c for disp_stdarg in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf_bootstrap
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov  8 15:51:15 2016 Antonin Rapini
** Last update Fri Nov 18 14:32:46 2016 Antonin Rapini
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
	{
	  s += call_func(&list, s, &str_length, arr);
	}
      else
	{
	  str_length += my_putchar(*s);
	}
      s++;
    }
  va_end(list);
  return (str_length);
}

int	is_alpha(char s)
{
  return ((s >= 'a' && s <= 'z')
	  || (s >= 'A' && s <= 'Z')
	  || (s == '%'));
}

int	call_func(va_list *list, char *s, int *str_length, t_format *arr)
{
  int	i;
  
  i = 1;
  s++;
  while (*s && !is_alpha(*s))
    {
      s++;
      i++;
    }
  while ((*arr).key)
    {
      if (*s == (*arr).key)
	{
	  *str_length += (*arr).format_funcptr(list, s);
	  return (i);
	}
      arr++;
    }
  exit (84);
  return (0);
}
