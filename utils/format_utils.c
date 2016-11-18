/*
** format_utils.c for format_utils in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:17:18 2016 Antonin Rapini
** Last update Fri Nov 18 13:48:06 2016 Antonin Rapini
*/

#include "utils.h"

int format_binary(va_list *list, char *s)
{
  return (my_putnbr_base(va_arg(*list, unsigned int), "01", 0));
}

int format_ptr(va_list *list, char *s)
{
  return (my_put_ptr(va_arg(*list, uintptr_t), "0123456789abcdef", 1));
}

int format_percent(va_list *list, char *s)
{
  return (my_putchar('%'));
}
