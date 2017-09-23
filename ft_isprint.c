#include <stdio.h>
#include <ctype.h>

int ft_isprint(char c)
{
    if (c >= 32 && c <= 127)
        return 1;
    return 0;
}

int main(void)
{
    printf("ft_isprint(' '): %d \n", ft_isprint(' '));
    printf("isprint(' ') test: %d \n", isprint(' '));

    printf("ft_isprint('C'): %d \n", ft_isprint('C'));
    printf("isprint('C') test: %d \n", isprint('C'));

    printf("ft_isprint('1'): %d \n", ft_isprint('1'));
    printf("isprint('1') test: %d \n", isprint('1'));

    printf("ft_isprint('@'): %d \n", ft_isprint('@'));
    printf("isprint('@') test: %d \n", isprint('@'));

    printf("ft_isprint('Z'): %d \n", ft_isprint('Z'));
    printf("isprint('Z') test: %d \n", isprint('Z'));

    printf("ft_isprint('['): %d \n", ft_isprint('['));
    printf("isprint('[') test: %d \n", isprint('['));

    printf("ft_isprint('/'): %d \n", ft_isprint('/'));
    printf("isprint('/') test: %d \n", isprint('/'));

    printf("ft_isprint('0'): %d \n", ft_isprint('0'));
    printf("isprint('0') test: %d \n", isprint('0'));

    printf("ft_isprint('9'): %d \n", ft_isprint('9'));
    printf("isprint('9') test: %d \n", isprint('9'));

    printf("ft_isprint('7'): %d \n", ft_isprint('7'));
    printf("isprint('7') test: %d \n", isprint('7'));

    printf("ft_isprint('2'): %d \n", ft_isprint('2'));
    printf("isprint('2') test: %d \n", isprint('2'));

    printf("ft_isprint('~'): %d \n", ft_isprint('~'));
    printf("isprint('~') test: %d \n", isprint('~'));

    printf("ft_isprint('~'): %d \n", ft_isprint('|'));
    printf("isprint('~') test: %d \n", isprint('|'));

    printf("ft_isprint('?'): %d \n", ft_isprint('?'));
    printf("isprint('?') test: %d \n", isprint('?'));


}
