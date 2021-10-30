#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
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
	int size_a;
	int size_b;
	int	move;
}		t_struct;

int	init_tab(t_struct *t, char **ac);
void	swap_a(t_struct *t);
void	swap_a(t_struct *t);
void	swap_b(t_struct *t);
void	swap_a_swap_b(t_struct *t);
void	push_b(t_struct *t);
void	init_int(t_struct *t, int av);
void	free_tab_b(t_struct *t);
void	free_tab_a(t_struct *t);
void	replace_b(t_struct *t);
void	free_all(t_struct *t);
void	free_tmp(int *tmp);
void	push_a(t_struct *t);
void	replace_a(t_struct *t);
void	rotate_a(t_struct *t);
void	rotate_b(t_struct *t);
void	rotate_a_rotate_b(t_struct *t);
void	reverse_rotate_a(t_struct *t);
void	reverse_rotate_b(t_struct *t);
void	reverse_rotate_all(t_struct *t);
void	sort(t_struct *t);
void	sort_int_tab_3(t_struct *t);
void	s_a_r_a(t_struct *t);
void	swap_r_r(t_struct *t);
void	sort_int_tab_5(t_struct *t);
void	place_a(t_struct *t);
void	place_a_norme(t_struct *t, int i, int j, int tmp);

int	verif_order(t_struct *t);
int	check_int_and_double(t_struct *t);
int	check_error(t_struct *t, char **ac);

#endif
