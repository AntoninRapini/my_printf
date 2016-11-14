/*
** my_showstr.c for my_showstr in /home/antonin.rapini/MyPrograms
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Wed Oct 12 14:15:18 2016 Antonin Rapini
** Last update Mon Nov 14 15:36:12 2016 Antonin Rapini
*/

#include "utils.h"

char	char_is_printable(char c)
{
  c = (c < 31 || c > 126) ? 0 : 1;
  return (c);
}

int	my_showstr(char *str)
{
  int	verbose;
  int	str_length;

  str_length = 0;
  while (*str)
    {
      if (char_is_printable(*str) == 1)
	{
	  str_length += my_putchar(*str);
	}
      else
	{
	  my_putchar('\\');
	  if (*str < 8)
	    verbose = 2;
	  else if (*str < 64)
	    verbose = 1;
	  else
	    verbose = 0;
	  str_length += my_putnbr_base(*str, "01234567", verbose);
	}
      str = str + 1;
    }
  return (str_length);
}
