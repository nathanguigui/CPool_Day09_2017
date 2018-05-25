/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** 
*/

char    *my_strcat(char *dest, char const *src)
{
	int	a = 0;
	int	b = 0;
	while (dest[a] != '\0' || src[b] != '\0'){
		if (dest[a] == '\0'){
			while (src[b] != '\0'){
				dest[a + b] = src[b];
				b = b + 1;
			}
			dest[a + b] = '\0';
		}
		a = a + 1;
	}
	return(0);
}
