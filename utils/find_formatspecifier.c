/*
** find_formatspecifier.c for find_formatspecifier in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sat Nov 19 19:06:51 2016 Antonin Rapini
** Last update Sun Nov 20 20:36:06 2016 Antonin Rapini
*/

#include <stdlib.h>
#include "format.h"
#include "utils.h"

t_formatspecifier	*find_formatspecifier(char *s)
{
  t_formatspecifier	*formatspecifier;
  int			i;

  formatspecifier = malloc(sizeof(formatspecifier));
  formatspecifier->padding = 0;
  formatspecifier->display_size = 0;
  formatspecifier->arg_size = -1;
  i = 0;
  while (!my_isnum(s[i]) && !my_isflag(s[i]) && s[i] != '.')
    {
      if (s[i] == '-')
	formatspecifier->padding = 1;
      i++;
    }
  assign_sizes(s, formatspecifier, i);
  return (formatspecifier);
}

void assign_sizes(char *s, t_formatspecifier *formatspecifier, int i)
{
  while (!my_isflag(s[i]))
    {
      if (my_isnum(s[i]))
	{
	  formatspecifier->display_size = my_getnbr(s + i);
	  i += my_nbrlen(formatspecifier->display_size);
	}
      else if (s[i] == '.')
	{
	  i++;
	  formatspecifier->arg_size = my_getnbr(s + i);
	  i += my_nbrlen(formatspecifier->arg_size);
	}
      else
	{
	  formatspecifier->display_size = -1;
	  return;
	}
    }
}
