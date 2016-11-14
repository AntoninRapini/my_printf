/*
** my_putnbr_base.c for my_putnbr_base in /home/antonin.rapini/CPool_Day06
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Oct 11 12:52:20 2016 Antonin Rapini
** Last update Mon Nov 14 15:33:42 2016 Antonin Rapini
*/

#include "utils.h"
#include <stdint.h>

int		my_put_ptr(uintptr_t nbr, char *base, int verbose)
{
  int		base_length;
  uintptr_t	div;
  int		str_length;

  str_length = 0;
  base_length = 0;
  div = 1;
  base_length = my_strlen(base);
  if (verbose)
    str_length += show_base(base_length, verbose);
  while (nbr / div >= base_length)
    {
      div = div * base_length;
    }
  while (div > 1)
    {
      str_length += my_putchar(base[nbr / div]);
      nbr = nbr % div;
      div = div / base_length;
    }
  str_length += my_putchar(base[nbr / div]);
  return (0);
}
