/*
** test.c for lol in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Wed Nov  9 22:06:30 2016 Antonin Rapini
** Last update Sat Nov 12 18:03:27 2016 Antonin Rapini
*/

#include <stdio.h>
#include "utils.h"
#include "functions.h"

int	main(void)
{
  /*char	str[5];
  str[0] = 't';
  str[1] = 6;
  str[2] = 't';
  str[3] = 'o';
  str[4] = '\0';
*/
  int kek = -98;
  int lol = 98;
  my_printf("%#x\n", lol);
  printf("%#x", lol);
}
