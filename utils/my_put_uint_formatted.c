/*
** my_put_formatted.c for my_put_formatted in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sat Nov 19 23:42:48 2016 Antonin Rapini
** Last update Sun Nov 20 19:10:48 2016 Antonin Rapini
*/

#include <unistd.h>
#include "format.h"
#include "utils.h"

int	my_put_uint_formatted(t_formatspecifier *format, unsigned int nbr)
{
  int	i;
  int	whitespace;
  int	nbr_len;

  nbr_len = my_nbrlen_base(nbr, 10);
  whitespace = format->display_size - nbr_len;
  i = 0;
  if (format->padding)
    {
      my_put_uint(nbr);
      while (i++ < whitespace)
	write(1 , " ", 1);
    }
  else
    {
      while (i++ < whitespace)
	write(1 , " ", 1);
      my_put_uint(nbr);
    }
  if (whitespace <= 0)
    return (nbr_len);
  else
    return (whitespace + nbr_len);
}
