#include "push_swap.h"

void free_tmp(int *tmp)
{
	free(tmp);
	tmp = NULL;
}

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

void	replace_b(t_struct *t)
{
	int *tmp;
	int i;

	t->size_a--;
	tmp = malloc(sizeof(int) * (t->size_a));
	if (!tmp)
		free_tmp(tmp);
	i = 1;
	while (i <= t->size_a)
	{
		tmp[i - 1] = t->a.tab[i];
		i++;
	}
	free_tab_a(t);
	t->a.tab = tmp;
}
