#include "push_swap.h"
void	free_all(t_struct *t)
{
	free_tab_a(t);
	free_tab_b(t);
}
void	free_tab_a(t_struct *t)
{
	free(t->a.tab);
	t->a.tab = NULL;
}

void	free_tab_b(t_struct *t)
{
	free(t->b.tab);
	t->b.tab = NULL;
}

void	replace_b(t_struct *t, int tmp)
{
	int i;
	int j;

	i = 1;
	j = 0;
	free_tab_a(t);
	t->a.tab = malloc(sizeof(int) * t->size_a - 1);
	t->size_a--;
	if(!t->a.tab)
		free_tab_a(t);
	while (j < t->n_int)
	{
		t->a.tab[j] = t->a.tab[j + 1];
		j++;
	}
	while (i < t->size_b)
	{
		t->b.tab[i] = t->b.tab[i + 1];
		i++;
	}
	t->b.tab[0] = tmp;

	// t->b.tab[0] = tmp;
}
