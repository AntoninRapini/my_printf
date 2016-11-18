/*
** utils.h for utils in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf_bootstrap/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov  8 15:14:31 2016 Antonin Rapini
** Last update Fri Nov 18 18:49:16 2016 Antonin Rapini
*/

#ifndef UTILS_H_
# define UTILS_H_

#include <stdarg.h>
#include <stdint.h>
#include "format.h"

int	my_putstr(char *);
int	my_putchar(char);
int	my_strlen(char *);
int	my_put_sint(int, int);
int	my_put_uint(unsigned int);
int	my_putnbr_base(unsigned int, char *, int);
int     my_put_ptr(uintptr_t, char *, int);  
int	my_showstr(char *);
char	char_is_printable(char);
char	*my_strcpy(char *, char *);
int	is_alpha(char);
int	call_func(va_list *, char *, int *, t_format *);
int	show_base(int, int, char *);
int	my_strlen(char *);
int	my_isflag(char);
int	my_strncmp(char *, char *, int);
char	*my_strdup(char *);
#endif /* !UTILS_H_ */
