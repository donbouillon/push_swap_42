/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:29:32 by slistle           #+#    #+#             */
/*   Updated: 2023/08/20 14:16:34 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack_node
{
	int					value;
	int					index;
	struct s_stack_node	*next;
}	t_stack_node;

/* lst utils */

t_stack_node	*ft_new_elem(int nbr);
t_stack_node	*ft_find_last(t_stack_node *lst);
void			ft_add_back(t_stack_node **lst, t_stack_node *new);
void			ft_add_front(t_stack_node **stack, t_stack_node *new);
int				ft_lst_size(t_stack_node *lst);

/* utils */

t_stack_node	*get_min(t_stack_node **stack);
void			set_index(t_stack_node **stack);
void			check_nbs(int argc, char **argv);
int				check_str(char *argv);
void			a_init(char **argv, int argc, t_stack_node **a);
int				compare_nbr(t_stack_node *stack, int nbr);
int				is_sorted(t_stack_node *stack);
void			ft_error(char *msg);
void			ft_tmp_error(char *msg, char *tmp);
void			ft_free_lst(t_stack_node **stack);
void			ft_free_str(char **str);
void			cccombo(t_stack_node **a, t_stack_node **b);

/* simple sort*/

void			three_sort(t_stack_node **a);
int				find_max(t_stack_node *a);
void			exclude_max(t_stack_node **a, t_stack_node **b, int i);
void			three_sort_b(t_stack_node **b);
void			five_sort(t_stack_node **a, t_stack_node **b);
void			four_sort(t_stack_node **a, t_stack_node **b);

/* radix sort*/

int				get_max_bits(t_stack_node **stack);
void			sorting(t_stack_node **a, t_stack_node **b);
void			radix_sort(t_stack_node **a, t_stack_node **b);

/* operations */

void			rotate_a(t_stack_node **stack);
void			rotate_b(t_stack_node **stack);
void			rotate_a_b(t_stack_node **a, t_stack_node **b);
void			reverse_rotate_a(t_stack_node **stack);
void			reverse_rotate_b(t_stack_node **stack);
void			push_a(t_stack_node **a, t_stack_node **b);
void			push_b(t_stack_node **a, t_stack_node **b);
void			swap_a(t_stack_node **stack);
void			swap_b(t_stack_node **stack);
void			swap_a_b(t_stack_node **a, t_stack_node **b);

#endif
