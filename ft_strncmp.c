#include <stdio.h> 
#include <string.h>

int ft_strncmp(char *s1, char *s2, int num)
{
	int i; 
	int j; 
	int diff; 
	
	i = 0; 
	j = 0; 
	diff = 0 ; 
	while (i < num)
	{
		if(s1[i] == s2[j]) 
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

int main() 
{
	char string1[]="cotsled"; 
	char string2[]="catsled"; 
	printf("result: %d \n", ft_strncmp(string1, string2, 3)); 
	printf("result: %d \n", strncmp(string1, string2, 3)); 

}
