/*
** create_formatting_array.c for create_formatting_array in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:27:32 2016 Antonin Rapini
** Last update Fri Nov 18 21:26:31 2016 Antonin Rapini
*/

#include "format.h"
#include <stdlib.h>
#include "utils.h"

void		populate_format_array(t_format *arr, int (*func)(va_list *list, char *str), char *str)
{
  arr->key = my_strdup(str);
  arr->format_funcptr = func;
}

t_format	*create_formatting_array()
{
  t_format	*arr;

  arr = malloc(sizeof(t_format) * 13);
  populate_format_array(arr, &format_sint, "i");
  populate_format_array(arr + 1, &format_uint, "u");
  populate_format_array(arr + 2, &format_octal, "o");
  populate_format_array(arr + 3, &format_hexa, "x");
  populate_format_array(arr + 4, &format_chexa, "X");
  populate_format_array(arr + 5, &format_char, "c");
  populate_format_array(arr + 6, &format_string, "s");
  populate_format_array(arr + 7, &format_showstring, "S");
  populate_format_array(arr + 8, &format_ptr, "p");
  populate_format_array(arr + 9, &format_binary, "b");
  populate_format_array(arr + 10, &format_percent, "%");
  populate_format_array(arr + 11, &format_sint, "d");
  populate_format_array(arr + 12, NULL, "\0");
  return (arr);
}
