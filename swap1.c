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
	int tmp1;
	int tmp;

	tmp1 = t->b.tab[0];
	t->b.tab[0] = t->b.tab[1];
	t->b.tab[1] = tmp1;
	tmp = t->a.tab[0];
	t->a.tab[0] = t->a.tab[1];
	t->a.tab[1] = tmp;
}

void	push_b(t_struct *t)
{
	if (t->a.tab)
	{
		int tmp;

		t->size_b++;
		t->b.tab = malloc(sizeof(int) * t->size_b);
		if (!t->b.tab)
			return ;
		t->b.tab[0] = t->a.tab[0];
		// t->count_a++;
		// replace_a(t, tmp);
	}
}
