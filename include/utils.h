/*
** utils.h for utils in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf_bootstrap/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov  8 15:14:31 2016 Antonin Rapini
** Last update Sun Nov 20 20:01:44 2016 Antonin Rapini
*/

#ifndef UTILS_H_
# define UTILS_H_

#include <stdarg.h>
#include <stdint.h>
#include "format.h"

int	my_call_func(va_list *, char *, int *, t_format *);
int	my_putstr(char *);
int	my_putchar(char);
int	my_strlen(char *);
int	my_put_sint(int, int);
int	my_put_uint(unsigned int);
int	my_putnbr_base(unsigned int, char *, int);
int     my_put_ptr(uintptr_t, char *);
int	my_showstr(char *);
char	char_is_printable(char);
char	*my_strcpy(char *, char *);
int	is_alpha(char);
int	show_base(int, int, char *);
int	my_strlen(char *);
int	my_isflag(char);
int	my_strncmp(char *, char *, int);
int	my_isnum(char);
char	*my_strdup(char *);
int	my_putstr_formatted(t_formatspecifier *, char *, int);
int	my_putnbr_base_formatted(t_formatspecifier *, char *, unsigned int, int);
int	my_put_sint_formatted(t_formatspecifier *, int, int);
int	my_put_uint_formatted(t_formatspecifier *, unsigned int);
int	my_put_ptr_formatted(t_formatspecifier *, uintptr_t);
char	*my_inttostr_base(int, char *);
int	my_getnbr(char *);
int	my_nbrlen_base(unsigned int, int);
int	my_nbrlen(int);
int	my_ptrlen(uintptr_t);
#endif /* !UTILS_H_ */
