/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 21:36:47 by aho               #+#    #+#             */
/*   Updated: 2017/09/28 06:18:03 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int main() 
{

// ft_strlen
/*
    int stringlength;
    stringlength = ft_strlen("hello friend");
    printf("string length: %d \n", stringlength);
*/

// ft_strdup
/*
    char *string1 = "annie";
    char *dupestring1;
    char *dupestring2;

    dupestring1 = ft_strdup(string1);
    printf("ft_strdup(string1): '%s' \n", dupestring1);

    dupestring2 = strdup(string1);
    printf("strdup(string1): '%s' \n", dupestring2);

    printf("ft_strdup(0): '%s' \n", ft_strdup(0));
    printf("strdup(0): '%s' \n", strdup(0));
*/



// ft_strcpy
/*
    //   char *string1 = "annie";
    char copystring1[10];
    char copystring2[10];

    printf("\n ***** Testing ft_strcpy ***** \n");
	
    ft_strcpy(copystring1, "hello leo");
    printf("ft_strcpy(copystring1, 'hello'): '%s' \n", copystring1);


    strcpy(copystring2, "hello leo");
    printf("strcpy(copystring2, 'hello'): '%s' \n", copystring2);

    ft_strcpy(copystring1, string1);
    printf("ft_strcpy(copystring1, string1): '%s' \n", copystring1);

    strcpy(copystring2, string1);
    printf("strcpy(copystring2, string1): '%s' \n", copystring2);
*/



// ft_strncpy
	// Test 1
/*
    char copystring1[10];
    char copystring2[10];

    ft_strncpy(copystring1, "hello leo", 5);
    printf("ft_strncpy(copystring1, 'hello'): '%s' \n", copystring1);
    strncpy(copystring2, "hello leo", 5);
    printf("standard strncpy(copystring2, 'hello'): '%s' \n", copystring2);
*/

/*
// ft_strcat
	// Test 1	
    printf("\n  ***** TEST 1: BASIC INPUT  ***** \n");	
	char test2a[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char test2b[100] = "there is no stars in the sky";
    printf("ft_strcat output: '%s' \n", ft_strcat(test2b, test2a));
*/

// ft_strncat
/*
	// Test 1
    printf("\n  ***** TEST 1: BASIC INPUT  ***** \n");
    char string1[100] = "hello ";
    char string2[100] = "world ";
    printf("ft_strncat('hello ', 'world'): '%s' \n", ft_strncat(string1, "world", 4));
    printf("stdlib strncat('hello ', 'world'): '%s' \n", strncat(string1, "world", 4));
*/

// ft_strchr
	// Test 1
/*
    printf("\n  ***** TEST 1: NULL CHARACTER  ***** \n");    
    char *string1 = "AA\0B";
    printf("ft_strchr string: %s \n", ft_strchr(string1, 'B'));
    printf("strchr string: %s \n", strchr(string1, 'B'));
*/

// ft_strrchr
	// Test 1
/*
    printf("\n  ***** TEST 1: BASIC INPUT  ***** \n");    
    char *string1 = "the cake is a lie !\0I'm hidden lol\r\n";
    printf("ft_strrchr string: %s \n", ft_strrchr(string1, ' '));
    printf("strrchr string: %s \n", strrchr(string1, ' '));
*/


// ft_strstr 
	// Test 1
/**    printf("\n  ***** TEST 1: BASIC INPUT  ***** \n");    
	char *s1 = "MZIRIBMZIRIBMZP";
	char *s2 = "MZIRIBMZP";
    printf("ft_strstr: %s \n", ft_strstr(s1, s2));
    printf("stdlib strstr: %s \n", strstr(s1, s2));
**/

// ft_strnstr 
	// Test 1
    printf("\n  ***** TEST 1: BASIC INPUT  ***** \n");    
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = ft_strlen(s2);
    printf("ft_strnstr: %s \n", ft_strnstr(s1, s2, max));
    printf("stdlib strstr: %s \n", strnstr(s1, s2, max));


// ft_strcmp
/*
	// Test 1
    char string1[]="yolo \0B";
    char string2[]="yolo \0A";

    printf("result:  %d \n", ft_strcmp(string1, string2));
    printf("strcmp test: %d \n", strcmp(string1, string2));
*/

// ft_strncmp
/*
	// Test 1 - Zero Length String
    printf("\n\n***** TEST 1: ZERO LENGTH STRING  ***** \n");
    char string1[]="AAAAAA";
    char string2[]="";
    printf("ft result: %d \n", ft_strncmp(string1, string2, 3));
    printf("stdlib result: %d \n\n", strncmp(string1, string2, 3));

 	// Test 2 - Null Character
    printf("\n\n***** TEST 2: NULL CHARACTER  ***** \n");
    char string3[]="AA\0B";
    char string4[]="AA\0A";
    printf("ft result: %d \n", ft_strncmp(string3, string4, 3));
    printf("stdlib result: %d \n\n", strncmp(string3, string4, 3));

	// Test 3 - Basic Input
    printf("\n\n***** TEST 3: BASIC INPUT ***** \n");

    char string5[]="the cake is a lie !\0I'm hidden lol\r\n";
    char string6[]="there is no stars in the sky";
	size_t size = strlen("the cake is a lie !\0I'm hidden lol\r\n");

    printf("size: %zu \n", size);
    printf("ft result: %d \n", ft_strncmp(string5, string6, size));
    printf("stdlib result: %d \n\n", strncmp(string5, string6, size));
*/

// ft_atoi

	// Test 3 - Basic Input
    printf("\n\n***** TEST 1: BASIC INPUT - atoi(5) ***** \n");

    printf("ft_atoi('5') %d \n", ft_atoi("5"));
    printf("STANDARD LIBRARY atoi('5') %d \n\n", atoi("5"));

    printf("ft_atoi('945') %d \n", ft_atoi("945"));
    printf("STANDARD LIBRARY atoi('945') %d \n\n", atoi("945"));


    printf("\n\n***** TEST 1: BASIC INPUT - atoi('abc') ***** \n");
    printf("ft_atoi('abc') %d \n", ft_atoi("abc"));
    printf("STANDARD LIBRARY atoi('abc') %d \n\n", atoi("abc"));


    printf("\n\n***** TEST 1: BASIC INPUT ***** \n");
    printf("ft_atoi('0') %d \n", ft_atoi("0"));
    printf("STANDARD LIBRARY atoi('0') %d \n\n", atoi("0"));


    printf("\n\n***** TEST 1: BASIC INPUT - atoi('123') ***** \n");
    printf("ft_atoi('123') %d \n", ft_atoi("123"));
    printf("STANDARD LIBRARY atoi('123') %d \n\n", atoi("123"));

    printf("\n\n***** TEST 1: BASIC INPUT ***** \n");
    printf("ft_atoi('abc123') %d \n", ft_atoi("abc123"));
    printf("STANDARD LIBRARY atoi('abc123') %d \n\n", atoi("abc123"));

// ft_isalpha
/*
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
*/


// ft_isdigit
/*
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
*/

// ft_isalnum

/*
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
*/

// ft_isascii
/*
	int i; 
	i = -1; 
	while (i < 530)
	{
		if (ft_isascii(i) != isascii(i))
		{
			printf("is ascii failed param: %i \n", i); 
		}
		i++;
	}


    printf("ft_isascii('C'): %d \n", ft_isascii('C'));
    printf("isascii('C') test: %d \n", isascii('C'));

    printf("ft_isascii('1'): %d \n", ft_isascii('1'));
    printf("isascii('1') test: %d \n", isascii('1'));

    printf("ft_isascii('@'): %d \n", ft_isascii('@'));
    printf("isascii('@') test: %d \n", isascii('@'));

    printf("ft_isascii('Z'): %d \n", ft_isascii('Z'));
    printf("isascii('Z') test: %d \n", isascii('Z'));

    printf("ft_isascii('['): %d \n", ft_isascii('['));
    printf("isascii('[') test: %d \n", isascii('['));

    printf("ft_isascii('/'): %d \n", ft_isascii('/'));
    printf("isascii('/') test: %d \n", isascii('/'));

    printf("ft_isascii('0'): %d \n", ft_isascii('0'));
    printf("isascii('0') test: %d \n", isascii('0'));

    printf("ft_isascii('9'): %d \n", ft_isascii('9'));
    printf("isascii('9') test: %d \n", isascii('9'));

    printf("ft_isascii('7'): %d \n", ft_isascii('7'));
    printf("isascii('7') test: %d \n", isascii('7'));

    printf("ft_isascii('2'): %d \n", ft_isascii('2'));
    printf("isascii('2') test: %d \n", isascii('2'));

    printf("ft_isascii('~'): %d \n", ft_isascii('~'));
    printf("isascii('~') test: %d \n", isascii('~'));

    printf("ft_isascii('~'): %d \n", ft_isascii('|'));
    printf("isascii('~') test: %d \n", isascii('|'));

    printf("ft_isascii('?'): %d \n", ft_isascii('?'));
    printf("isascii('?') test: %d \n", isascii('?'));
*/

// ft_isprint
/*
	int isprint_i; 
	isprint_i = -1; 
	while (isprint_i < 530) 
	{
		if (ft_isprint(isprint_i) != isprint(isprint_i))
		{
            printf("ft_isprint failed param: %i \n", isprint_i);
		}
		isprint_i++; 
	}

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
*/

// ft_toupper
/*
    printf("ft_toprint(' '): %c \n", ft_toupper(' '));
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
*/

// ft_tolower
/*
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
*/


// ft_putstr
//    ft_putstr("ft_putstr: hello \n");

// ft_putendl
//    ft_putendl("hello friends");

}
