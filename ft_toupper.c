#include <stdio.h>
#include <ctype.h>

char ft_toupper(char c)
{
    if (c >= 97 && c <= 122)
        return c - 32;
    return c;
}

int main(void)
{
    printf("ft_isprint(' '): %c \n", ft_toupper(' '));
    printf("toupper(' ') test: %c \n", toupper(' '));

    printf("ft_toupper('C'): %c \n", ft_toupper('C'));
    printf("toupper('C') test: %c \n", toupper('C'));

    printf("ft_toupper('1'): %c \n", ft_toupper('1'));
    printf("toupper('1') test: %c \n", toupper('1'));

    printf("ft_toupper('@'): %c \n", ft_toupper('@'));
    printf("toupper('@') test: %c \n", toupper('@'));

    printf("ft_toupper('Z'): %c \n", ft_toupper('Z'));
    printf("toupper('Z') test: %c \n", toupper('Z'));

    printf("ft_toupper('['): %c \n", ft_toupper('['));
    printf("toupper('[') test: %c \n", toupper('['));

    printf("ft_toupper('/'): %c \n", ft_toupper('/'));
    printf("toupper('/') test: %c \n", toupper('/'));

    printf("ft_toupper('0'): %c \n", ft_toupper('0'));
    printf("toupper('0') test: %c \n", toupper('0'));

    printf("ft_toupper('9'): %c \n", ft_toupper('9'));
    printf("toupper('9') test: %c \n", toupper('9'));

    printf("ft_toupper('7'): %c \n", ft_toupper('7'));
    printf("toupper('7') test: %c \n", toupper('7'));

    printf("ft_toupper('2'): %c \n", ft_toupper('2'));
    printf("toupper('2') test: %c \n", toupper('2'));

    printf("ft_toupper('~'): %c \n", ft_toupper('~'));
    printf("toupper('~') test: %c \n", toupper('~'));

    printf("ft_toupper('~'): %c \n", ft_toupper('|'));
    printf("toupper('~') test: %c \n", toupper('|'));

    printf("ft_toupper('?'): %c \n", ft_toupper('?'));
    printf("toupper('?') test: %c \n", toupper('?'));

    printf("ft_toupper('a'): %c \n", ft_toupper('a'));
    printf("toupper('a') test: %c \n", toupper('a'));

    printf("ft_toupper('b'): %c \n", ft_toupper('b'));
    printf("toupper('b') test: %c \n", toupper('b'));

    printf("ft_toupper('z'): %c \n", ft_toupper('z'));
    printf("toupper('z') test: %c \n", toupper('z'));

}
