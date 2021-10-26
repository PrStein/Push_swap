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
		int *tmp;

		tmp = NULL;
		t->size_b++;
		tmp = malloc(sizeof(int) * t->size_b);
		if (!tmp)
			free_tmp(tmp);
		if (t->b.tab)
		{
			tmp = t->b.tab;
			free_tab_b(t);
		}
		t->b.tab = malloc(sizeof(int) * t->size_b + 1);
		if (!t->b.tab)
			free_tab_b(t);
		t->b.tab[0] = t->a.tab[0];
		replace_b(t, tmp);
		free_tmp(tmp);
	}
}

void	push_a(t_struct *t)
{
	if (t->b.tab)
	{
		int *tmp;

		tmp = NULL;
		tmp = malloc(sizeof(int) * t->size_a);
		if (!tmp)
			free_tmp(tmp);
		if (t->a.tab)
		{
			tmp = t->a.tab;
			free_tab_a(t);
		}
		t->size_a++;
		t->a.tab = malloc(sizeof(int) * t->size_a);
		if (!t->a.tab)
			free_tab_a(t);
		t->a.tab[0] = t->b.tab[0];
		replace_a(t, tmp);
		free_tmp(tmp);
	}
}
