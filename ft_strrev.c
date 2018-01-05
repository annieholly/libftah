#include "libft.h"

void ft_strrev(char *s)
{
  char 	temp;
  int 	i;
  int	end;
  int 	halflen;

  i = 0;
end = (int)ft_strlen(s) - 1;
halflen = (int)ft_strlen(s) / 2;

  while (i < halflen && s[i] != '\0')
    {
      temp = s[i];
      s[i] = s[end];
      s[end] = temp;
	end--;
      i++;
    }

}
