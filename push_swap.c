#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	t_struct t;
	int i = 0;

	t.count_a = 0;
	t.count_b = 0;
	init_tab(&t, ac, av);
	while (i < 5)
	{
		printf("%d\n", t.a.tab[i]);
		i++;
	}
	return 0;
}
