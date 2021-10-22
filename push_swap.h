#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_tab
{
	int	*tab;
}		t_tab;

typedef struct s_struct
{
	t_tab	a;
	t_tab	b;
	int	count_a;
	int count_b;
}		t_struct;

void	init_tab(t_struct *t, int av, char **ac);
#endif
