#include "libft.h"

char	*ft_ltoa(long int n)
{
	char		*numstr;
	int		power;
	int		sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	power = ft_powerofnuml(n);
	n = n * sign;
	numstr = ft_memalloc(power + 2);
	if (numstr == 0)
		return (0);
	numstr[power + 1] = '\0';
	while (power > 0)
	{
		numstr[power] = (char)((n % 10) + 48);
		n = n / 10;
		power--;
	}
	numstr[power] = (char)(n) + 48;
	if (sign == -1)
		numstr[power] = '-';
	return (numstr);
}
