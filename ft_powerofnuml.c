#include "libft.h"

long int	 ft_powerofnuml(long int n)
{
	long int	power;

	power = 0;
	if (n < 0)
	{
		n = n * -1;
		power++;
	}
	while (n >= 10)
	{
		power++;
		n = n / 10;
	}
	return (power);
}
