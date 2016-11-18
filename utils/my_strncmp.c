/*
** my_strcnmp.c for my_strncmp in /home/antonin.rapini/CPool_Day06/tests
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Mon Oct 10 10:19:01 2016 Antonin Rapini
** Last update Wed Oct 12 11:12:09 2016 Antonin Rapini
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	index;

  index = 0;
  while (s1[index] != '\0' && s2[index] != '\0' && index < n)
    {
      if (s1[index] != s2[index])
	{
	  return (s1[index] - s2[index]);
	}
      index = index + 1;
    }
  if ((s1[index] == s2[index] || index == n) && s1[index - 1] == s2[index - 1])
    {
      return (0);
    }
  else
    {
      return (s1[index] - s2[index]);
    }
}
