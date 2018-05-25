/*
** EPITECH PROJECT, 2017
** my_sort_int_array
** File description:
** 
*/

void my_sort_int_array(int *tab, int size)
{
	int i = 0;
	int j = 0;
	int k = 1;

	while (k == 1) {
		k = 0;
		for (i = 0; i < size; i++) {
			if (tab[i] < tab[i - 1] && i > 0) {
				j = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = j;
			}
		}
		for (i = 0; i < size; i++) {
			if (tab[i] < tab[i - 1] && i > 0) {
				k = 1;
			}
		}
	}
}
