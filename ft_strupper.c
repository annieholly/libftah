#include "libft.h"

void ft_strupper(char *s)
{
  int i;
  i = 0;
  
  while (s[i] != '\0')
    {
      s[i] = ft_toupper(s[i]);
      i++;
    }
}
