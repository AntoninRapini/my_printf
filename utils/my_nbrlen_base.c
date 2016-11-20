/*
** my_nbrlen_base.c for my_nbrlen_base in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sun Nov 20 15:54:52 2016 Antonin Rapini
** Last update Sun Nov 20 19:22:55 2016 Antonin Rapini
*/

int		my_nbrlen_base(unsigned int nbr, int base)
{
  unsigned int	div;
  int		pass;

  pass = 1;
  div = 1;
  while (nbr / div >= base)
    {
      div *= base;
      pass++;
    }
  return (pass);
}
