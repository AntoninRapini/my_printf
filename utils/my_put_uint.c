/*
** my_put_nbr.c for my_put_nbr.c in /home/antonin.rapini/CPool_Day03
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Wed Oct  5 17:27:29 2016 Antonin Rapini
** Last update Mon Nov 14 15:35:24 2016 Antonin Rapini
*/

#include "utils.h"

int	my_put_uint(unsigned int nb)
{
  int	div;
  int	str_length;

  str_length = 0;
  div = 1;
  while (nb/div >= 10)
    {
      div = div * 10;
    }
  while (div >= 1)
    {
      str_length += my_putchar((nb/div) + '0');
      nb = nb % div;
      div = div / 10;
    }
  return (0);
}
