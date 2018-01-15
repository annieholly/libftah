#include "libft.h"
#include <stdio.h>

char	*ft_ftoa(float n, int precision, int includepoint)
{
int    	intpart = (int)n;
float 	fpart = n - (float)intpart;
int 	power = 1;
char 	*beforePoint;
char 	*afterPoint;
char 	*str;

beforePoint = ft_itoa(intpart);

if (precision != 0)
  {
    while (precision > 0)
      {
	power = power * 10;
	precision--;
      }

    fpart = fpart * (float)power;
    afterPoint = ft_itoa((int)fpart);

    str = ft_strnew(ft_strlen(beforePoint) + ft_strlen(afterPoint) + 2);
    ft_strcat(str, beforePoint);
    ft_strcat(str, ".");
    ft_strcat(str, afterPoint);
    free(afterPoint);
    return str;
  }
if (includepoint == 1)
  {
    str = ft_strnew(ft_strlen(beforePoint) + 2);
    ft_strcat(str, beforePoint);
    ft_strcat(str, ".");
    return str;
  }

return beforePoint;
}

char	*ft_Lftoa(long double n, int precision, int includepoint)
{
	int    	intpart = (int)n;
	long double  fpart = n - (long double)intpart;
	long long int 	power = 1;
	char 	*beforePoint;
	char 	*afterPoint;
	char 	*str;

	beforePoint = ft_itoa(intpart);
	if (precision != 0)
	{
		while (precision > 0)
		{
		  power = power * 10;
		  precision--;
		}
    fpart = fpart * power;
    afterPoint = ft_unsigneditoa((unsigned int)fpart);
    str = ft_strnew(ft_strlen(beforePoint) + ft_strlen(afterPoint) + 2);
    ft_strcat(str, beforePoint);
    ft_strcat(str, ".");
    ft_strcat(str, afterPoint);
    free(afterPoint);
    return str;
  }
if (includepoint == 1)
  {
    str = ft_strnew(ft_strlen(beforePoint) + 2);
    ft_strcat(str, beforePoint);
    ft_strcat(str, ".");
    return str;
  }
return beforePoint;
}
