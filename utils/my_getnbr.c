/*
** my_getbr.c for my_getnbr in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sun Nov 20 00:36:16 2016 Antonin Rapini
** Last update Sun Nov 20 19:13:02 2016 Antonin Rapini
*/

#include "utils.h"

int	my_getnbr_rec(char *str, int nbr)
{
  if (my_isnum(*str))
    {
      return (my_getnbr_rec(str + 1, (nbr * 10) + (*str - 48)));
    }
  else
    {
      return (nbr);
    }
}

int	my_getnbr(char *str)
{
  return (my_getnbr_rec(str, 0));
}
