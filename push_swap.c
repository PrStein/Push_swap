#include "push_swap.h"

void	init_int(t_struct *t, int av)
{
	t->count_a = 0;
	t->count_b = 0;
	t->size_a = av - 1;
	t->size_b = 0;
	t->n_int = av;
}
int main(int av, char **ac)
{
	t_struct t;
	int i = 0;

	init_int(&t, av);
	init_tab(&t, ac);
	push_b(&t);
	push_b(&t);
	// push_a(&t);
	// swap_a(&t);
	// swap_b(&t);
	// swap_a_swap_b(&t);


	while (i < t.size_a)
	{
		printf("%d\n", t.a.tab[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("%d\n\n", t.size_b);
	while (i < t.size_b)
	{
		printf("%d\n", t.b.tab[i]);
		i++;
	}
	free_all(&t);
	// system("leaks a.out");
	return 0;
}
