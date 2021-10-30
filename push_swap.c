#include "push_swap.h"

void	reverse_rotate_all(t_struct *t)
{
	reverse_rotate_a(t);
	reverse_rotate_b(t);
	t->move++;
}

void	sort(t_struct *t)
{
	if (verif_order(t) == 0)
		return ;
	if (t->n_int == 2 || t->n_int == 3)
		sort_int_tab_3(t);
	if (t->n_int == 4 || t->n_int == 5)
		sort_int_tab_5(t);
}

void	init_int(t_struct *t, int av)
{
	t->count_a = 0;
	t->count_b = 0;
	t->size_a = av - 1;
	t->size_b = 0;
	t->n_int = av - 1;
	t->move = 0;
}
int main(int av, char **ac)
{
	if (av > 1)
	{
		t_struct t;
		int i = 0;
		init_int(&t, av);
		init_tab(&t, ac);
		if (check_error(&t, ac) == 1 || check_int_and_double(&t) == 1)
		{
			ft_putstr_fd("Error\n", 1);
			return (0);
		}
		sort(&t);
		if (t.move == 0)
		{
			printf("no move\n");
			return (0);
		}
		while (i < t.size_a)
			printf("%d\n", t.a.tab[i++]);
		printf("move = %d\n", t.move);
		free_all(&t);
	}
	else
		printf("ta mere");
	// system("leaks a.out");
	return (0);
}
