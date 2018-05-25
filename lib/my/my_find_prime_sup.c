/*
** EPITECH PROJECT, 2017
** my_find_prime_sup
** File description:
** 
*/

int my_find_prime_sup(int nb)
{
	int a = nb;

	if (nb <= 2) {
		return(2);
	}

	while (my_is_prime(a) != 1) {
		a = a + 1;
	}
	return(a);
}
