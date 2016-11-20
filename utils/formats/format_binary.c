/*
** format_utils.c for format_utils in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:17:18 2016 Antonin Rapini
** Last update Sun Nov 20 18:21:06 2016 Antonin Rapini
*/

#include "utils.h"

int format_binary(va_list *list, char *s, t_formatspecifier *format)
{
  return (my_putnbr_base_formatted
	  (format, "01", va_arg(*list, unsigned int), 0));
}
