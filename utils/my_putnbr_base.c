/*
** my_putnbr_base.c for my_putnbr_base in /home/antonin.rapini/CPool_Day06
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Oct 11 12:52:20 2016 Antonin Rapini
** Last update Wed Nov  9 22:30:16 2016 Antonin Rapini
*/

#include "utils.h"

int	my_putnbr_base(unsigned int nbr, char *base, int verbose)
{
  int	base_length;
  int	div;

  base_length = 0;
  div = 1;
  base_length = my_strlen(base);
  if (verbose)
    show_base(base_length, verbose);
  while (nbr / div >= base_length)
    {
      div = div * base_length;
    }
  while (div > 1)
    {
      my_putchar(base[nbr / div]);
      nbr = nbr % div;
      div = div / base_length;
    }
  my_putchar(base[nbr / div]);
  return (0);
}

void	show_base(int base_length, int verbose)
{
  if (base_length == 16)
    my_putstr("0x");
  else if (base_length == 8)
    {
      if(verbose == 2)
	my_putchar('0');
      my_putchar('0');
    }
}
