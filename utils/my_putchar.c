/*
** my_putchar.c for my_putchar in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf_bootstrap/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov  8 15:36:47 2016 Antonin Rapini
** Last update Mon Nov 14 15:27:21 2016 Antonin Rapini
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (1);
}
