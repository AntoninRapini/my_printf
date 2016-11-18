/*
** format_text.c for format_text in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:11:29 2016 Antonin Rapini
** Last update Fri Nov 18 14:40:47 2016 Antonin Rapini
*/

#include "utils.h"

int format_char(va_list *list, char *s)
{
  return (my_putchar(va_arg(*list, int)));
}

int format_string(va_list *list, char *s)
{
  return (my_putstr(va_arg(*list, char *)));
}

int format_showstring(va_list *list, char *s)
{
  return (my_showstr(va_arg(*list, char *)));
}
