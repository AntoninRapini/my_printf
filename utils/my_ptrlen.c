/*
** my_nbrlen_base.c for my_nbrlen_base in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sun Nov 20 15:54:52 2016 Antonin Rapini
** Last update Sun Nov 20 19:22:45 2016 Antonin Rapini
*/

#include <stdint.h>

int		my_ptrlen(uintptr_t nbr)
{
  uintptr_t	div;
  int		pass;

  pass = 1;
  div = 1;
  while (nbr / div >= 16)
    {
      div *= 16;
      pass++;
    }
  return (pass);
}
