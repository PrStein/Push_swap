#include "push_swap.h"


void	init_tab(t_struct *t, int av, char **ac)
{
	int i;
	int j;

	i = 1;
	j = 0;
	t->a.tab = malloc(sizeof(int) * (av - 1));
	if (!t->a.tab)
		return ;
	while (i <= av)
	{
		t->a.tab[j] = atoi(ac[i]);
		i++;
		j++;
	}
}
