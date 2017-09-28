#include <stddef.h>
#include <unistd.h>
#include <stdio.h> 
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>

void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
size_t ft_strlen(const char *s);
char *ft_strdup(const char *s1);
char *ft_strcpy(char  *dst, const char *src);
char *ft_strncpy(char *dst, const char *src, size_t len);
char *ft_strcat(char *restrict s1, const char *restrict s2);
char *ft_strncat(char *restrict s1, const char *s2, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strstr(const char *big, const char *little);
char *ft_strnstr(const char *big, const char *little, size_t len);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1,const  char *s2, size_t num);
int ft_atoi(const char *str);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putendl(char const *s);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(const char *s, int fd);
void ft_putendl_fd(const char *s, int fd);
