/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** 
*/

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;
	int k = my_strlen(src);

	
	while (i < n) {
		if (i  >= k) {
			dest[i] = '\0';
			break;
		}
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return(dest);
}
