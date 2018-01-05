#include "libft.h"
#include <stdio.h>

int	ft_decimaldigitcount(float n)
{
  int	count;
  count = 0;
  n = (n - (int)n);

  if (n > 0)
    {
      n = n * 10;
      count++;
    }
  while (n / (int)n != 1)
    {
      count++;
      n = n * 10;
    }
  return (count);
}

int	ft_power(int base, int exponent)
{
  if (exponent == 0)
    return (1);
  else
    return (base * ft_power(base, exponent - 1));
}  

int		ft_decimaldigits(float n)
{
  float		decimal_part;
  int 		decimal_count;
  int		decimaldigits;

  decimal_count= ft_decimaldigitcount(n);
  decimal_part = n - (int)n;
  decimaldigits = (int)(decimal_part * ft_power(10, decimal_count));
  if (decimal_part == 0)
    return ((int)n);
  return (decimaldigits);
}

char	*ft_ftoa_ah(float n, int precision, int decimal)
{
	char		*floatstr;
	char		*decimaldigits;
	int		neg_true;
	int		int_part;
	int		int_count;
	int		decimal_true;
	int		decimal_part;
	int		decimal_count;
	int		zero_count;
	int		i;

	i = 0;
	neg_true = 0;
	if (n < 0)
	{
	  neg_true = 1;
	  n = n * -1;
	}
	int_part = (int)n;
	int_count = ft_powerofnum(int_part);
	decimal_true = 1;
	decimal_part = ft_decimaldigits(n);
	decimal_count = ft_decimaldigitcount(n);
	zero_count = precision - decimal_count;
	decimaldigits = ft_itoa(decimal_part);
	printf("decimal_digits: %s\n", decimaldigits);

	decimal_part = ft_atoin(decimaldigits, precision);
	printf("decimal_part: %d\n", decimal_part);
	decimaldigits = ft_itoa(decimal_part);

	if (decimal_count == 0)
	  decimal_true = 0;
	if (!(floatstr = ft_strnew(1)))
	  return (0);

	if (neg_true)
	    ft_strjoin(floatstr, "-");
	floatstr = ft_strjoin(floatstr, ft_itoa(int_part));
	if (decimal_count == 0 && decimal == 0)
	  return (floatstr);
	floatstr = ft_strjoin(floatstr, ".");
	if (decimal_count == 0)
	  return (floatstr);
	floatstr = ft_strjoin(floatstr, ft_itoa(decimal_part));
	if (zero_count == 0)
	  return (floatstr);
	while (zero_count > 0)
	  {
	    floatstr = ft_strjoin(floatstr, "0");
	    zero_count--;
	  }
	printf("floatstr: %s\n", floatstr);
	return (floatstr);
}
