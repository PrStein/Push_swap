#include "push_swap.h"

int	verif_order(t_struct *t)
{
	int i;

	i = 0;
	while (i < t->size_a - 1)
	{
		if (t->a.tab[i] > t->a.tab[i + 1])
			return(1);
		i++;
	}
	return(0);
}

int	check_error(t_struct *t, char **ac)
{
	int i;
	int x;
	int j;

	x = 1;
	while (ac[x])
	{
		j = 0;
		while (ac[x][j])
		{
			if (ac[x][j] < '0' || ac[x][j] > '9')
				return(1);
			j++;
		}
		// i = x + 1;
		// while (ac[i])
		// 	if (ft_strncmp(ac[x], ac[i++], ft_strlen(ac[x])) == 0)
		// 		return (1);
		x++;
	}
	return (0);
}

int	check_int_and_double(t_struct *t)
{
	int i;
	int j;

	i = 0;
	while (i < t->n_int)
	{
		j = i + 1;
		while (j <= t->n_int)
		{
			if (t->a.tab[j] == t->a.tab[i])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while (i <= t->n_int)
	{
		if (t->a.tab[i] > 2147483647)
			return (1);
		i++;
	}
	return (0);
}
int	init_tab(t_struct *t, char **ac)
{
	int i;
	int j;

	i = 1;
	j = 0;
	t->a.tab = malloc(sizeof(int) * (t->n_int));
	if (!t->a.tab)
		free_tab_a(t) ;
	while (i <= t->n_int)
	{
		if (ft_atoi(ac[i]) > 2147483647)
			return (1);
		t->a.tab[j] = ft_atoi(ac[i]);
		i++;
		j++;
	}
	if (check_int_and_double(t) == 1 || check_error(t, ac) == 1)
	return (1);
	// i = 0;
	// j = 1;
	return (0);
}
