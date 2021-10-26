#include "push_swap.h"

void	replace_a(t_struct *t, int *tmp)
{
	int i;

	i = 1;
	while (i < t->size_a)
	{
		t->a.tab[i] = tmp[i - 1];
		i++;
	}
	free_tmp(tmp);
	t->size_b--;
	tmp = malloc(sizeof(int) * t->size_b);
	if (!tmp)
		free_tmp(tmp);
	tmp = t->b.tab;
	free_tab_a(t);
	t->b.tab = malloc(sizeof(int) * t->size_b);
	if (!t->b.tab)
		free_tab_a(t);
	i = 0;
	while (i < t->size_b)
	{
		t->b.tab[i] = tmp[i + 1];
		i++;
	}
}
