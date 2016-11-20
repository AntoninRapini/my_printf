/*
** find_formatspecifier.c for find_formatspecifier in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sat Nov 19 19:06:51 2016 Antonin Rapini
** Last update Sun Nov 20 00:56:49 2016 Antonin Rapini
*/

#include "format.h"
#include "utils.h"
#include <stdlib.h>

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
  while (!my_isflag(s[i]))
    {
      if (my_isnum(s[i]))
	{
	  formatspecifier->display_size = my_getnbr(s + i);
	  while (my_isnum(s[i]))
	    i++;
	}
      else if (s[i] == '.')
	{
	  i++;
	  formatspecifier->arg_size = my_getnbr(s + i);
	  while (my_isnum(s[i]))
	    i++;
	}
      else
	{
	  formatspecifier->display_size = -1;
	  return (formatspecifier);
	}
    }
  return (formatspecifier);
}
