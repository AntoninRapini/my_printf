/*
** format_utils.c for format_utils in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:17:18 2016 Antonin Rapini
** Last update Sun Nov 20 20:02:25 2016 Antonin Rapini
*/

#include "utils.h"

int format_ptr(va_list *list, char *s, t_formatspecifier *format)
{
  uintptr_t adress;

  adress = va_arg(*list, uintptr_t);
  return (my_put_ptr_formatted(format, adress));
}
