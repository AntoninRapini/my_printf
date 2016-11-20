/*
** my_strdup.c for my_strdup in /home/antonin.rapini/CPool_Day08/task01
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Wed Oct 12 18:40:56 2016 Antonin Rapini
** Last update Sun Nov 20 20:19:07 2016 Antonin Rapini
*/

#include <stdlib.h>
#include "utils.h"

char	*my_strdup(char *src)
{
  char	*dest;

  dest = malloc((my_strlen(src) + 1) * sizeof(char));
  if (dest == NULL)
    exit (84);
  dest[my_strlen(src)] = '\0';
  return (my_strcpy(dest, src));
}
