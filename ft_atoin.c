#include "libft.h"

int	ft_atoin(const char *str, int n)
{
	int		i;
	int		sign;
	long int	num;

	i = 0;
	sign = ft_signofnumstr(str);
	num = 0;

	while (i < n)
	{
		while (ft_isspace(str[i]) == 1 || str[i] == '-' || str[i] == '+')
			i++;
		if (ft_isdigit(str[i]) == 0)
			return (0);
		while (ft_isdigit(str[i]) == 1)
		{
			num = (num * 10) + (str[i] - '0');
			i++;
			if (ft_isdigit(str[i]) == 0 || str[i] == '\0')
				return (sign * num);
		}
		i++;
	}
	return (sign * num);
}
