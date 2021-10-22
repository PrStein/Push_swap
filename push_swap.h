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
	int n_int;
	int	count_a;
	int count_b;
	int size_b;
}		t_struct;

void	init_tab(t_struct *t, char **ac);
void	swap_a(t_struct *t);
void	swap_a(t_struct *t);
void	swap_b(t_struct *t);
void	swap_a_swap_b(t_struct *t);
void	push_b(t_struct *t);
// void	replace_a(t_struct *t, int tmp);

#endif
