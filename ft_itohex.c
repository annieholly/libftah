#include "libft.h"
#include <stdio.h>

int gethexlen(int n)
{
  int count;
  
  count = 1;
  while (n != 0 && n != -1)
    {
      n = n / 16;
      if (n == 0)
	break;
      count++;
    }
  return (count); 
}

int getuihexlen(unsigned long long int n)
{
  int count;
  
  count = 1;
  while (n != 0)
    {
      n = n / 16;
      if (n == 0)
	break;
      count++;
    }
  return (count); 
}

char gethexchar(int n_mod)
{
  char hexchar;
  
  if (n_mod < 10)
    hexchar = (char)n_mod + 48;
  else 
    hexchar = (char)n_mod + 87;
  return (hexchar);
}

char *ft_itohex(int n, int uppercase_flag, int prepend)
{
  char *hexstr;
  int hexlen;
  int n_mod;
  int i;

  i = 0;
  hexlen = gethexlen(n);
  if (prepend)
    hexlen = hexlen + 3;
  hexstr = ft_strnew(hexlen);
  n_mod = -1;
  
  while (n != 0 || n_mod != 0)
    {
      n_mod = n % 16;
      hexstr[i] = gethexchar(n_mod);
      n = n / 16;
      if (n == 0)
	break;
      i++;
    }
  if (prepend)
    ft_strcat(hexstr, "x0");
  if (hexlen > 1)
    ft_strrev(hexstr);

  
  if (uppercase_flag == 1)
    ft_strupper(hexstr);
  
  return (hexstr);
}

char *ft_uitohex(unsigned long long int n, int uppercase_flag, int prepend)
{
  char *hexstr;
  int hexlen;
  int n_mod;
  int i;

  i = 0;
  hexlen = getuihexlen(n);
  if (prepend)
    hexlen = hexlen + 3;
  hexstr = ft_strnew(hexlen);
  n_mod = -1;
  
  while (n != 0 || n_mod != 0)
    {
      n_mod = n % 16;
      hexstr[i] = gethexchar(n_mod);
      n = n / 16;
      if (n == 0)
	break;
      i++;
    }
  if (prepend)
    ft_strcat(hexstr, "x0");
  if (hexlen > 1)
    ft_strrev(hexstr);

  
  if (uppercase_flag == 1)
    ft_strupper(hexstr);
  
  return (hexstr);
}
