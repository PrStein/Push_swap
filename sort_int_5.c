#include "push_swap.h"

void	place_a(t_struct *t)
{
	int tmp;
	int i;

	i = 1;
	tmp = t->a.tab[0];
	if (verif_order(t) == 0)
	{
		printf("check");
		return ;
	}
	else
		while (verif_order(t) == 1 && i < t->size_a)
			i++;
		printf("%d\n", i);
}

void	sort_int_tab_5(t_struct *t)
{
	push_b(t);
	push_b(t);
	sort_int_tab_3(t);
	push_a(t);
	place_a(t);
}
