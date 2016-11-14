/*
** test.c for lol in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Wed Nov  9 22:06:30 2016 Antonin Rapini
** Last update Mon Nov 14 15:41:16 2016 Antonin Rapini
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

  int a = -89;
  int b = 10;
  int c = 189;
  //my_printf("%p\n", &lol);
  //  printf("%i\n", a);
  b = my_printf("%o\n", a);
  my_put_sint(b, 0);
}
