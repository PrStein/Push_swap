#include "push_swap.h"

void	init_tab(t_struct *t, char **ac)
{
	int i;
	int j;

	i = 1;
	j = 0;
	t->a.tab = malloc(sizeof(int) * (t->n_int - 1));
	if (!t->a.tab)
		return ;
	while (i < t->n_int)
	{
		t->a.tab[j] = ft_atoi(ac[i]);
		i++;
		j++;
	}
}
