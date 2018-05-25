/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** 
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;
	char *p = s1;
	char *q = s2;
	int result = 0;	
	
	while (s1[i] != '\0' || s1[i] != n) {
		if (s1[i] != s2[i]) {
			return (s2[i] - s1[i]);
		}
		i = i + 1;
	}
	return (0);
}
