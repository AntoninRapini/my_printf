/*
** format.h for format in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:21:21 2016 Antonin Rapini
** Last update Fri Nov 18 15:04:56 2016 Antonin Rapini
*/

#ifndef FORMAT_H_
# define FORMAT_H_

#include <stdarg.h>
#include <stdint.h>

typedef struct	s_format
{
  char		key;
  int		(*format_funcptr)(va_list *list, char *str);
}		t_format;

int		format_sint(va_list *, char *);
int		format_uint(va_list *, char *);
int		format_octal(va_list *, char *);
int		format_hexa(va_list *, char *);
int		format_chexa(va_list *, char *);
int		format_char(va_list *, char *);
int		format_string(va_list *, char *);
int		format_showstring(va_list *, char *);
int		format_binary(va_list *, char *);
int		format_ptr(va_list *, char *);
int		format_percent(va_list *, char *);
t_format	*create_formatting_array();

#endif /* !FORMAT_H_ */
