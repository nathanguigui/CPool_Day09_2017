/*
** EPITECH PROJECT, 2017
** my_strlowcase
** File description:
** 
*/

char *my_strlowcase(char *str)
{
	int i = 0;
	
	while (*str != '\0') {
		if (65 <= *str && *str <= 90) {
			*str = *str + 32;
		}
		i = i + 1;
		str = str + 1;
	}
	str = str - i;
	return(str);
}

int main()
{
	char *texte;
	texte = "chosEaz";
	my_putstr(my_strlowcase(strdup(texte)));
	
}
