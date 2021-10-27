#include "push_swap.h"

void	rotate_a(t_struct *t)
{
	int tmp;
	int i;

	i = 0;
	tmp = t->a.tab[0];
	while (i < t->size_a - 1)
	{
		t->a.tab[i] = t->a.tab[i + 1];
		i++;
	}
	t->a.tab[i] = tmp;
}

void	rotate_b(t_struct *t)
{
	int tmp;
	int i;

	i = 0;
	tmp = t->b.tab[0];
	while (i < t->size_b - 1)
	{
		t->b.tab[i] = t->b.tab[i + 1];
		i++;
	}
	t->b.tab[i] = tmp;
}

void	rotate_a_rotate_b(t_struct *t)
{
	rotate_a(t);
	rotate_b(t);
}

void	reverse_rotate_a(t_struct *t)
{
	int *tmp;
	int tp;
	int i;

	i = 0;
	tp = 0;
	tmp = malloc(sizeof(int) * t->size_a - 1);
	if (!tmp)
		free_tmp(tmp);
	tp = t->a.tab[t->size_a];
	while (i < t->size_a)
	{
		tmp[i] = t->a.tab[i + 1];
		i++;
	}
	t->a.tab[0] = tp;
	i = 0;
	while (i < t->size_a)
	{
		t->a.tab[i + 1] = tmp[i];
		i++;
	}
}
