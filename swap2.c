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
	t->move++;

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
	t->move++;
}

void	rotate_a_rotate_b(t_struct *t)
{
	rotate_a(t);
	rotate_b(t);
	t->move++;
}

void	reverse_rotate_a(t_struct *t)
{
	int i;
	int tmp;

	i = t->size_a - 1;
	tmp = t->a.tab[i];
	while (i > 0)
	{
		t->a.tab[i] = t->a.tab[i - 1];
		i--;
	}
	t->a.tab[i] = tmp;
	t->move++;
}

void	reverse_rotate_b(t_struct *t)
{
	int i;
	int tmp;

	i = t->size_b - 1;
	tmp = t->b.tab[i];
	while (i > 0)
	{
		t->b.tab[i] = t->b.tab[i - 1];
		i--;
	}
	t->b.tab[i] = tmp;
	t->move++;
}
