#include <stdio.h> 
#include <ctype.h> 

int ft_isalnum(char c) 
{
    if (c >= 48 && c <= 57)
        return 1;
    if (c >= 65  && c <= 90)
        return 1;
    if (c >= 97 && c <= 122)
        return 1;
	return 0;

}

int main(void)
{
    printf("ft_isalnum('C'): %d \n", ft_isalnum('C'));
    printf("isalnum('C') test: %d \n", isalnum('C'));

    printf("ft_isalnum('1'): %d \n", ft_isalnum('1'));
    printf("isalnum('1') test: %d \n", isalnum('1'));

    printf("ft_isalnum('@'): %d \n", ft_isalnum('@'));
    printf("isalnum('@') test: %d \n", isalnum('@'));

    printf("ft_isalnum('Z'): %d \n", ft_isalnum('Z'));
    printf("isalnum('Z') test: %d \n", isalnum('Z'));

    printf("ft_isalnum('['): %d \n", ft_isalnum('['));
    printf("isalnum('[') test: %d \n", isalnum('['));

    printf("ft_isalnum('/'): %d \n", ft_isalnum('/'));
    printf("isalnum('/') test: %d \n", isalnum('/'));

    printf("ft_isalnum('0'): %d \n", ft_isalnum('0'));
    printf("isalnum('0') test: %d \n", isalnum('0'));

    printf("ft_isalnum('9'): %d \n", ft_isalnum('9'));
    printf("isalnum('9') test: %d \n", isalnum('9'));

    printf("ft_isalnum('7'): %d \n", ft_isalnum('7'));
    printf("isalnum('7') test: %d \n", isalnum('7'));

    printf("ft_isalnum('2'): %d \n", ft_isalnum('2'));
    printf("isalnum('2') test: %d \n", isalnum('2'));

}
