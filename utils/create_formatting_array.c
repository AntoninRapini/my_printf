/*
** create_formatting_array.c for create_formatting_array in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:27:32 2016 Antonin Rapini
** Last update Fri Nov 18 15:04:21 2016 Antonin Rapini
*/

#include "format.h"
#include <stdlib.h>

t_format	*create_formatting_array()
{
  t_format	*arr;

  arr = malloc(sizeof(t_format) * 12);
  arr[0].key = 'i';
  arr[0].format_funcptr = &format_sint;
  arr[1].key = 'u';
  arr[1].format_funcptr = &format_uint;
  arr[2].key = 'o';
  arr[2].format_funcptr = &format_octal;
  arr[3].key = 'x';
  arr[3].format_funcptr = &format_hexa;
  arr[4].key = 'X';
  arr[4].format_funcptr = &format_chexa;
  arr[5].key = 'c';
  arr[5].format_funcptr = &format_char;
  arr[6].key = 's';
  arr[6].format_funcptr = &format_string;
  arr[7].key = 'S';
  arr[7].format_funcptr = &format_showstring;
  arr[8].key = 'p';
  arr[8].format_funcptr = &format_ptr;
  arr[9].key = 'b';
  arr[9].format_funcptr = &format_binary;
  arr[10].key = '%';
  arr[10].format_funcptr = &format_percent;
  arr[11].key = 'd';
  arr[11].format_funcptr = &format_sint;
  arr[12].key = 0;
  return (arr);
}
