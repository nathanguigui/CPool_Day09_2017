/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** 
*/

void my_putchar();

int my_strlen(char const *str)
{
	int numero_carac;
	numero_carac = 0;
	while (str[numero_carac] != '\0') {
		numero_carac = numero_carac +1;
	}
	return (numero_carac);
}
