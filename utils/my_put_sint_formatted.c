/*
** my_put_formatted.c for my_put_formatted in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sat Nov 19 23:42:48 2016 Antonin Rapini
** Last update Sun Nov 20 20:18:38 2016 Antonin Rapini
*/

#include <unistd.h>
#include "format.h"
#include "utils.h"

int	my_put_sint_formatted(t_formatspecifier *format, int nbr, int verbose)
{
  int	i;
  int	whitespace;
  int	nbr_len;

  nbr_len = my_nbrlen(nbr) + (verbose > 0 && nbr > 0);
  whitespace = format->display_size - nbr_len;
  i = 0;
  if (format->padding)
    {
      my_put_sint(nbr, verbose);
      while (i++ < whitespace)
	write(1 , " ", 1);
    }
  else
    {
      while (i++ < whitespace)
	write(1 , " ", 1);
      my_put_sint(nbr, verbose);
    }
  if (whitespace <= 0)
    return (nbr_len);
  else
    return (whitespace + nbr_len);
}
