/*
** my_putnbr_base.c for my_putnbr_base in /home/antonin.rapini/CPool_Day06
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Oct 11 12:52:20 2016 Antonin Rapini
** Last update Sun Nov 20 20:22:46 2016 Antonin Rapini
*/

#include <stdint.h>
#include <stdlib.h>
#include "utils.h"

int		my_put_ptr(uintptr_t nbr, char *base)
{
  uintptr_t	base_length;
  uintptr_t	div;
  int		str_length;

  str_length = 0;
  base_length = 16;
  div = 1;
  show_base(base_length, 1, base);
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
