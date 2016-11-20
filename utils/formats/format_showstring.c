/*
** format_text.c for format_text in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:11:29 2016 Antonin Rapini
** Last update Sun Nov 20 16:21:23 2016 Antonin Rapini
*/

#include "utils.h"

int format_showstring(va_list *list, char *s, t_formatspecifier *format)
{
  return (my_showstr(va_arg(*list, char *)));
}
