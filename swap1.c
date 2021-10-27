#include "push_swap.h"

void	swap_a(t_struct *t)
{
	int tmp;

	tmp = t->a.tab[0];
	t->a.tab[0] = t->a.tab[1];
	t->a.tab[1] = tmp;
}

void	swap_b(t_struct *t)
{
	int tmp;

	tmp = t->b.tab[0];
	t->b.tab[0] = t->b.tab[1];
	t->b.tab[1] = tmp;
}

void	swap_a_swap_b(t_struct *t)
{
	swap_a(t);
	swap_b(t);
}

void	push_b(t_struct *t)
{
	if (t->a.tab)
	{
		int i;
		int *tmp;

		tmp = NULL;
		i = 0;
		t->size_b++;
			tmp = malloc(sizeof(int) * t->size_b);
			if (!tmp)
				free_tmp(tmp);
			tmp[0] = t->a.tab[0];
		while (i < t->size_b - 1)
		{
			tmp[i + 1] = t->b.tab[i];
			i++;
		}
		free_tab_b(t);
		t->b.tab = tmp;
		replace_b(t);
	}
}

void	push_a(t_struct *t)
{
	if (t->b.tab)
	{
		int i;
		int *tmp;

		tmp = NULL;
		i = 0;
		t->size_a++;
			tmp = malloc(sizeof(int) * t->size_a);
			if (!tmp)
				free_tmp(tmp);
			tmp[0] = t->b.tab[0];
		while (i < t->size_a - 1)
		{
			tmp[i + 1] = t->a.tab[i];
			i++;
		}
		free_tab_a(t);
		t->a.tab = tmp;
		replace_a(t);
	}
}
