#include <stdio.h> 
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i; 
	int j; 
	int diff;

	i = 0; 
	j = 0;
	diff = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++; 
		}
		else
		{
			diff = s1[i] - s2[j]; 
			return diff;
		}
	}
	return 0; 
}
	
int main(void) 
{
	char string1[]="bob"; 
	char string2[]="catsled";
	
	printf("result:  %d \n", ft_strcmp(string1,string2));
	printf("strcmp test: %d \n", strcmp(string1, string2));
}
