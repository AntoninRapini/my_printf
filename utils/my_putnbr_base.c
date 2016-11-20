/*
** my_putnbr_base.c for my_putnbr_base in /home/antonin.rapini/CPool_Day06
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Oct 11 12:52:20 2016 Antonin Rapini
** Last update Sun Nov 20 20:21:19 2016 Antonin Rapini
*/

#include "utils.h"

int		my_putnbr_base(unsigned int nbr, char *base, int verbose)
{
  unsigned int	base_length;
  unsigned int	div;
  int		str_length;

  str_length = 0;
  base_length = 0;
  div = 1;
  base_length = my_strlen(base);
  if (verbose)
    str_length += show_base(base_length, verbose, base);
  while (nbr / div >= base_length)
      div = div * base_length;
  while (div >= 1)
    {
      str_length += my_putchar(base[nbr / div]);
      nbr = nbr % div;
      div = div / base_length;
    }
  return (str_length);
}

int	show_base(int base_length, int verbose, char *base)
{
  if (base_length == 16)
    {
      if (base[base_length - 1] == 'f')
	my_putstr("0x");
      else
	my_putstr("0X");
      return (2);
    }
  else if (base_length == 8)
    {
      my_putchar('0');
      if (verbose == 2)
	{
	  my_putchar('0');
	  return (2);
	}
      return (1);
    }
  return (0);
}
