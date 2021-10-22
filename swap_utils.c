#include "push_swap.h"

void	replace_b(t_struct *t, int tmp)
{
	// t->a.tab += malloc(sizeof(int) * 1);
	if (t->a.tab)
		return ;
	while (t->count_a < t->n_int)
	{
		t->count_a++;
		t->a.tab[t->count_a] = tmp;
		tmp = t->a.tab[t->count_a];
	}
	while (t->count_b >= 0)
	{
		t->count_b--;
		t->b.tab[t->count_b] = tmp;
		tmp = t->b.tab[t->count_b];
	}
	// t->b.tab -= malloc(sizeof(int) * 1);
	if (t->b.tab)
		return ;
}
