/*
** EPITECH PROJECT, 2017
** my_is_prime
** File description:
** 
*/

int my_is_prime(int nb)
{
	int a = 2;

	if (nb <= 0) {
		return(0);
	}
	
	while (nb % a > 0) {
		a = a + 1;
		if (a == nb) {
			return(1);
		}
			
	}
	return(0);
}
