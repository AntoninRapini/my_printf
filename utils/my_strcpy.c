/*
** my_strcpy.c for my_strcpy in /home/antonin.rapini/CPool_Day06
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Mon Oct 10 08:46:45 2016 Antonin Rapini
** Last update Tue Oct 11 21:08:10 2016 Antonin Rapini
*/

char	*my_strcpy(char *dest, char *src)
{
  int	index;

  index = 0;
  while (src[index] != '\0')
    {
      dest[index] = src[index];
      index = index + 1;
    }
  return (dest);
}
