#include <stdio.h> 
#include <ctype.h>

int ft_isalpha(char c)
{
	if (c >= 65  && c <= 90) 
		return 1;
	if (c >= 97 && c <= 122) 
		return 1;
	return 0; 			
}

int main(void) 
{
	printf("ft_isalpha('a'): %d \n", ft_isalpha('a'));
	printf("isalpha('a') test: %d \n", isalpha('a'));

	printf("ft_isalpha('b'): %d \n", ft_isalpha('b'));
	printf("isalpha('b') test: %d \n", isalpha('b'));

	printf("ft_isalpha('C'): %d \n", ft_isalpha('C'));
	printf("isalpha('C') test: %d \n", isalpha('C'));

	printf("ft_isalpha('1'): %d \n", ft_isalpha('1'));
	printf("isalpha('1') test: %d \n", isalpha('1'));

	printf("ft_isalpha('@'): %d \n", ft_isalpha('@'));
	printf("isalpha('@') test: %d \n", isalpha('@'));

	printf("ft_isalpha('Z'): %d \n", ft_isalpha('Z'));
	printf("isalpha('Z') test: %d \n", isalpha('Z'));

	printf("ft_isalpha('['): %d \n", ft_isalpha('['));
	printf("isalpha('[') test: %d \n", isalpha('['));

	printf("ft_isalpha('/'): %d \n", ft_isalpha('/'));
	printf("isalpha('/') test: %d \n", isalpha('/'));

	printf("ft_isalpha('0'): %d \n", ft_isalpha('0'));
	printf("isalpha('0') test: %d \n", isalpha('0'));

	
} 
