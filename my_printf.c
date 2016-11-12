/*
** disp_stdarg.c for disp_stdarg in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf_bootstrap
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov  8 15:51:15 2016 Antonin Rapini
** Last update Sat Nov 12 17:45:58 2016 Antonin Rapini
*/

#include <stdarg.h>
#include "utils.h"

void		my_printf(char *s, ...)
{
  va_list	list;

  va_start(list, s);
  while (*s)
    {
      if(*s == '%' && *(s + 1))
	{
	  s += call_func(&list, s);
	}
      else
	{
	  my_putchar(*s);
	}
      s++;
    }
  va_end(list);
}

int	is_alpha(char s)
{
  return ((s >= 'a' && s <= 'z')
	  || (s >= 'A' && s <= 'Z'));
}

int	call_func(va_list *list, char *s)
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
    my_putchar(va_arg(*list, int));
  else if (*s == 's')
    my_putstr(va_arg(*list, char *));
  else if (*s == 'i')
    my_put_sint(va_arg(*list, int), *(s - 1) == '+');
  else if(*s == 'u')
    my_put_uint(va_arg(*list, unsigned int));
  else if(*s == 'o')
    my_putnbr_base(va_arg(*list, unsigned int), "01234567", *(s - 1) == '#');
  else if(*s == 'x')
    my_putnbr_base(va_arg(*list, unsigned int), "0123456789abcdef", *(s - 1) == '#');
  else if(*s == 'X')
    my_putnbr_base(va_arg(*list, unsigned int), "0123456789ABCDEF", *(s - 1) == '#');
  else if(*s == 'p')
    my_put_uint(va_arg(*list, unsigned int));
  else if (*s == '%')
    my_putchar('%');
  else if (*s == 'b')
    my_putnbr_base(va_arg(*list, unsigned int), "01", 0);
  else if (*s == 'S')
    my_showstr(va_arg(*list, char *));
  else if (*s == 'P')
    my_putnbr_base(va_arg(*list, unsigned int), "0123456789ABCDEF", 1);
  return (i);
}
