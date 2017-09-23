#include <stdio.h> 
#include <ctype.h> 

int ft_isdigit(char c) 
{
	if (c >= 48 && c <= 57) 
		return 1; 
	return 0; 
}

int main(void)
{
    printf("ft_isdigit('C'): %d \n", ft_isdigit('C'));
    printf("isdigit('C') test: %d \n", isdigit('C'));

    printf("ft_isdigit('1'): %d \n", ft_isdigit('1'));
    printf("isdigit('1') test: %d \n", isdigit('1'));

    printf("ft_isdigit('@'): %d \n", ft_isdigit('@'));
    printf("isdigit('@') test: %d \n", isdigit('@'));

    printf("ft_isdigit('Z'): %d \n", ft_isdigit('Z'));
    printf("isdigit('Z') test: %d \n", isdigit('Z'));

    printf("ft_isdigit('['): %d \n", ft_isdigit('['));
    printf("isdigit('[') test: %d \n", isdigit('['));

    printf("ft_isdigit('/'): %d \n", ft_isdigit('/'));
    printf("isdigit('/') test: %d \n", isdigit('/'));

    printf("ft_isdigit('0'): %d \n", ft_isdigit('0'));
    printf("isdigit('0') test: %d \n", isdigit('0'));

    printf("ft_isdigit('9'): %d \n", ft_isdigit('9'));
    printf("isdigit('9') test: %d \n", isdigit('9'));

    printf("ft_isdigit('7'): %d \n", ft_isdigit('7'));
    printf("isdigit('7') test: %d \n", isdigit('7'));

    printf("ft_isdigit('2'): %d \n", ft_isdigit('2'));
    printf("isdigit('2') test: %d \n", isdigit('2'));

}
