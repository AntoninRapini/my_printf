/*
** disp_stdarg.c for disp_stdarg in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf_bootstrap
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov  8 15:51:15 2016 Antonin Rapini
** Last update Mon Nov 14 15:39:52 2016 Antonin Rapini
*/

#include <stdarg.h>
#include "utils.h"
#include <stdint.h>

int		my_printf(char *s, ...)
{
  va_list	list;
  int		str_length;

  str_length = 0;
  va_start(list, s);
  while (*s)
    {
      if(*s == '%' && *(s + 1))
	{
	  s += call_func(&list, s, &str_length);
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
	  || (s >= 'A' && s <= 'Z'));
}

int	call_func(va_list *list, char *s, int *str_length)
{
  int	i;
  
  i = 1;
  s++;
  while (*s && (!is_alpha(*s) || *s == '%'))
    {
      s++;
      i++;
    }
  if (*s == 'c')
    *str_length += my_putchar(va_arg(*list, int));
  else if (*s == 's')
    *str_length += my_putstr(va_arg(*list, char *));
  else if (*s == 'i')
    *str_length += my_put_sint(va_arg(*list, int), *(s - 1) == '+');
  else if(*s == 'u')
    *str_length += my_put_uint(va_arg(*list, unsigned int));
  else if(*s == 'o')
    *str_length += my_putnbr_base(va_arg(*list, unsigned int), "01234567", *(s - 1) == '#');
  else if(*s == 'x')
    *str_length += my_putnbr_base(va_arg(*list, unsigned int), "0123456789abcdef", *(s - 1) == '#');
  else if(*s == 'X')
    *str_length += my_putnbr_base(va_arg(*list, unsigned int), "0123456789ABCDEF", *(s - 1) == '#');
  else if(*s == 'p')
    *str_length += my_put_ptr(va_arg(*list, uintptr_t), "0123456789abcdef", 1);
  else if (*s == '%')
    *str_length += my_putchar('%');
  else if (*s == 'b')
    *str_length += my_putnbr_base(va_arg(*list, unsigned int), "01", 0);
  else if (*s == 'S')
    *str_length += my_showstr(va_arg(*list, char *));
  return (i);
}
