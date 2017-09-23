#include <stdio.h>
#include <ctype.h>

char ft_tolower(char c)
{
    if (c >= 65 && c <= 90)
        return c + 32;
    return c;
}

int main(void)
{
    printf("ft_tolower(' '): %c \n", ft_tolower(' '));
    printf("tolower(' ') test: %c \n", tolower(' '));

    printf("ft_tolower('A'): %c \n", ft_tolower('A'));
    printf("tolower('A') test: %c \n", tolower('A'));

    printf("ft_tolower('C'): %c \n", ft_tolower('C'));
    printf("tolower('C') test: %c \n", tolower('C'));

    printf("ft_tolower('Z'): %c \n", ft_tolower('Z'));
    printf("tolower('Z') test: %c \n", tolower('Z'));

    printf("ft_tolower('1'): %c \n", ft_tolower('1'));
    printf("tolower('1') test: %c \n", tolower('1'));

    printf("ft_tolower('@'): %c \n", ft_tolower('@'));
    printf("tolower('@') test: %c \n", tolower('@'));

    printf("ft_tolower('Z'): %c \n", ft_tolower('Z'));
    printf("tolower('Z') test: %c \n", tolower('Z'));

    printf("ft_tolower('['): %c \n", ft_tolower('['));
    printf("tolower('[') test: %c \n", tolower('['));

    printf("ft_tolower('/'): %c \n", ft_tolower('/'));
    printf("tolower('/') test: %c \n", tolower('/'));

    printf("ft_tolower('0'): %c \n", ft_tolower('0'));
    printf("tolower('0') test: %c \n", tolower('0'));

    printf("ft_tolower('9'): %c \n", ft_tolower('9'));
    printf("tolower('9') test: %c \n", tolower('9'));

    printf("ft_tolower('7'): %c \n", ft_tolower('7'));
    printf("tolower('7') test: %c \n", tolower('7'));

    printf("ft_tolower('2'): %c \n", ft_tolower('2'));
    printf("tolower('2') test: %c \n", tolower('2'));

    printf("ft_tolower('~'): %c \n", ft_tolower('~'));
    printf("tolower('~') test: %c \n", tolower('~'));

    printf("ft_tolower('~'): %c \n", ft_tolower('|'));
    printf("tolower('~') test: %c \n", tolower('|'));

    printf("ft_tolower('?'): %c \n", ft_tolower('?'));
    printf("tolower('?') test: %c \n", tolower('?'));

    printf("ft_tolower('a'): %c \n", ft_tolower('a'));
    printf("tolower('a') test: %c \n", tolower('a'));

    printf("ft_tolower('b'): %c \n", ft_tolower('b'));
    printf("tolower('b') test: %c \n", tolower('b'));

    printf("ft_tolower('z'): %c \n", ft_tolower('z'));
    printf("tolower('z') test: %c \n", tolower('z'));

}
