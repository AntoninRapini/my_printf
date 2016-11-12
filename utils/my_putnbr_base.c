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

int	my_putnbr_base(int nbr, char *base)
{
  int	base_length;
  int	div;

  base_length = 0;
  div = 1;
  if (nbr < 0)
    {
      my_putchar(45);
      nbr = -nbr;
    }
  base_length = my_strlen(base);
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
