/*
** format.h for format in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 13:21:21 2016 Antonin Rapini
** Last update Sun Nov 20 16:51:18 2016 Antonin Rapini
*/

#ifndef FORMAT_H_
# define FORMAT_H_

#include <stdarg.h>
#include <stdint.h>

typedef struct	s_formatspecifier
{
  int		padding;
  int		display_size;
  int		arg_size;
}		t_formatspecifier;

typedef struct	s_format
{
  char		*key;
  int		(*format_funcptr)(va_list *list, char *str, t_formatspecifier *format);
}		t_format;

int		format_sint(va_list *, char *, t_formatspecifier *);
int		format_uint(va_list *, char *, t_formatspecifier *);
int		format_octal(va_list *, char *, t_formatspecifier *);
int		format_hexa(va_list *, char *, t_formatspecifier *);
int		format_chexa(va_list *, char *, t_formatspecifier *);
int		format_char(va_list *, char *, t_formatspecifier *);
int		format_string(va_list *, char *, t_formatspecifier *);
int		format_showstring(va_list *, char *, t_formatspecifier *);
int		format_binary(va_list *, char *, t_formatspecifier *);
int		format_ptr(va_list *, char *, t_formatspecifier *);
int		format_percent(va_list *, char *, t_formatspecifier *);
t_format	*create_formatting_array();
t_formatspecifier *find_formatspecifier(char *);
#endif /* !FORMAT_H_ */
