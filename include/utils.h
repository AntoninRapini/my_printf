/*
** utils.h for utils in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf_bootstrap/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov  8 15:14:31 2016 Antonin Rapini
** Last update Wed Nov  9 22:42:20 2016 Antonin Rapini
*/

#ifndef UTILS_H_
# define UTILS_H_

#include <stdarg.h>

void	my_putstr(char *);
void	my_putchar(char);
int	my_strlen(char *);
int	my_put_sint(int, int);
int	my_put_uint(unsigned int);
int	my_putnbr_base(unsigned int, char *, int);
int	my_showstr(char *);
char	char_is_printable(char);
int	is_alpha(char);
int	call_func(va_list *, char *);
void	show_base(int, int);
#endif /* !UTILS_H_ */
