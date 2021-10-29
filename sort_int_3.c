#include "push_swap.h"

void	swap_r_r(t_struct *t)
{
	swap_a(t);
	reverse_rotate_a(t);
}

void	s_a_r_a(t_struct *t)
{
	swap_a(t);
	rotate_a(t);
}

void	sort_int_tab_3(t_struct *t)
{
	if (t->n_int == 2 && t->a.tab[0] > t->a.tab[1])
		swap_a(t);
	else if (t->a.tab[0] > t->a.tab[1])
	{
		if (t->a.tab[0] < t->a.tab[2] && t->a.tab[1] < t->a.tab[2])
			swap_a(t);
		if (t->a.tab[0] > t->a.tab[2] && t->a.tab[1] > t->a.tab[2])
			swap_r_r(t);
		if (t->a.tab[0] > t->a.tab[2] && t->a.tab[1] < t->a.tab[2])
			rotate_a(t);
	}
	else if (t->a.tab[0] < t->a.tab[1])
	{
		if (t->a.tab[0] > t->a.tab[2] && t->a.tab[1] > t->a.tab[2])
			reverse_rotate_a(t);
		if (t->a.tab[0] < t->a.tab[2] && t->a.tab[1] > t->a.tab[2])
			s_a_r_a(t);
	}
}
