#include "libft.h"
#include <stdio.h>

int getoctlen(int n)
{
  int count;
  
  count = 1;
  while (n != 0 && n != -1)
    {
      n = n / 8;
      if (n == 0)
	break;
      count++;
    }
  return (count); 
}

/*
char gethexchar(int n_mod)
{
  char hexchar;
  
  if (n_mod < 10)
    hexchar = (char)n_mod + 48;
  else 
    hexchar = (char)n_mod + 87;
  return (hexchar);
}
*/

char *ft_itooct(int n)
{
  char *hexstr;
  int hexlen;
  int n_mod;
  int i;

  i = 0;
  hexlen = getoctlen(n);
  hexstr = ft_strnew(hexlen);
  n_mod = -1;
  
  while (n != 0 || n_mod != 0)
    {
      n_mod = n % 8;
      hexstr[i] = gethexchar(n_mod);
      n = n / 8;
      if (n == 0)
		  break;
      i++;
    }
  if (hexlen > 1)
    ft_strrev(hexstr);
  return (hexstr);
}
