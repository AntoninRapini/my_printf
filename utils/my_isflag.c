/*
** my_isflag.c for my_isflag in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 18 18:22:33 2016 Antonin Rapini
** Last update Fri Nov 18 18:23:36 2016 Antonin Rapini
*/

int	my_isflag(char c)
{
  return ((c >= 'a' && c <= 'z')
	  || (c >= 'A' && c <= 'Z')
	  || (c == '%'));
}
