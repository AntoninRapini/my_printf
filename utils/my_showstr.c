/*
** my_showstr.c for my_showstr in /home/antonin.rapini/MyPrograms
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Wed Oct 12 14:15:18 2016 Antonin Rapini
** Last update Wed Nov  9 22:40:27 2016 Antonin Rapini
*/

#include "utils.h"

char	char_is_printable(char c)
{
  c = (c < 31 || c > 126) ? 0 : 1;
  return (c);
}

int	my_showstr(char *str)
{
  while (*str)
    {
      if (char_is_printable(*str) == 1)
	{
	  my_putchar(*str);
	}
      else
	{
	  my_putchar('\\');
	  my_putnbr_base(*str, "01234567", 1);
	}
      str = str + 1;
    }
  return (0);
}
