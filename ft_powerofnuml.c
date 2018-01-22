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

long int	 ft_powerofnumll(long long int n)
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

intmax_t	 ft_powerofnumj(intmax_t n)
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

size_t	 ft_powerofnumz(size_t n)
{
	long int	power;

	power = 0;
	while (n >= 10)
	{
		power++;
		n = n / 10;
	}
	return (power);
}
