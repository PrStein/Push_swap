#include "push_swap.h"

void	place_a_norme(t_struct *t, int i, int j, int tmp)
{
	if (j % i < 2)
		while (t->a.tab[0] != tmp)
		{
			rotate_a(t);
			j--;
		}
	else
	{
		while (t->a.tab[0] != tmp)
		{
			reverse_rotate_a(t);
			j++;
		}
	}
}
void	place_a(t_struct *t)
{
	int tmp;
	int i;
	int j;

	i = 0;
	tmp = 2147483647;
	while (i < t->size_a)
	{
		if (tmp > t->a.tab[i])
			{
				tmp = t->a.tab[i];
				j = i;
			}
		i++;
	}
	place_a_norme(t, i, j, tmp);
	push_b(t);
}
void	sort_int_tab_5(t_struct *t)
{
	int i = 0;
	place_a(t);
	if (t->n_int == 5)
		place_a(t);
	printf("\n");
	sort_int_tab_3(t);
	push_a(t);
	if (t->n_int == 5)
		push_a(t);
}
