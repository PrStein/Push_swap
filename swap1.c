#include "push_swap.h"

int	*ft_swap_a(t_struct t)
{
	int tmp;

	tmp = t->a[0];
	t->a[0] = a[1];
	t->a[1] = tmp;
	return(t->a);
}
