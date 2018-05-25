/*
** EPITECH PROJECT, 2017
** my_strupcase
** File description:
** 
*/

char *my_strupcase(char *str)
{
	int i = 0;
	
	while (*str != '\0') {
		if (97 <= *str && *str <= 122) {
			*str = *str - 32;
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
	my_putstr(my_strupcase(strdup(texte)));
	
}
