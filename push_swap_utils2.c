#include "push_swap.h"

void	replace_a(t_struct *t)
{
	int *tmp;
	int i;

	t->size_b--;
	tmp = malloc(sizeof(int) * (t->size_b));
	if (!tmp)
		free_tmp(tmp);
	i = 1;
	while (i <= t->size_b)
	{
		tmp[i - 1] = t->b.tab[i];
		i++;
	}
	free_tab_b(t);
	t->b.tab = tmp;
}

// void	copy_a(t_struct *t, int *tmp)
// {
// 	int i;
//
// 	i = 0;
// 	tmp = malloc(sizeof(int) * t->size_a);
// 	while (i < t->size_a - 1)
// 	{
// 		tmp[i] = t->a.tab[i];
// 		i++;
// 	}
// }
