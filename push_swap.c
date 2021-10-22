#include "push_swap.h"
#include <stdio.h>

int main(int av, char **ac)
{
	t_struct t;
	int i = 0;

	t.count_a = 0;
	t.count_b = 0;
	t.size_b = 0;
	t.n_int = av;
	init_tab(&t, ac);
	// push_b(&t);
	// while (i < av - 1)
	// {
		printf("%d\n", t.b.tab[0]);
	// 	i++;
	// }
	return 0;
}
