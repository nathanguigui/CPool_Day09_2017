/*
** EPITECH PROJECT, 2017
** my_strcapitalize
** File description:
** 
*/

char *my_strcapitalize(char *str)
{
	int i = 1;
	if('a' <= str[0] <= 'z') {
		str[0] = str[0] - 32;//mise en maj de la prem lettre
	}
	while(str[i] != '\0') {
		if(str[i - 1] >= ' ' && str[i - 1] <= '/' || str[i-1] >= ':' && str[i-1] <= '@') {
			if(str[i] >= 'a' && str[i] <= 'z'){
				str[i] = str[i] - 32;//mise en maj
			}
		}else if(str[i ] >= 'A' && str[i] <= 'Z') {
				str[i] = str[i] + 32;//mise en minus

		}
		i = i + 1;
	}	
	return(str);
}
