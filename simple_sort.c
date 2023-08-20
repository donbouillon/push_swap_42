/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:06:08 by slistle           #+#    #+#             */
/*   Updated: 2023/08/20 14:08:15 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_stack_node **a)
{
	if (is_sorted(*a) == 0)
		return ;
	if ((*a)->value > (*a)->next->value)
	{
		swap_a(a);
		if (is_sorted(*a) == 0)
			return ;
	}
	reverse_rotate_a(a);
	if (is_sorted(*a) == 0)
		return ;
	swap_a(a);
}

int	find_max(t_stack_node *a)
{
	int	tmp_max;

	tmp_max = a->value;
	while (a)
	{
		if (a->value > tmp_max)
			tmp_max = a->value;
		a = a->next;
	}
	return (tmp_max);
}

void	exclude_max(t_stack_node **a, t_stack_node **b, int i)
{
	if (i >= 3)
	{	
		while (i < ft_lst_size(*a))
		{
			rotate_a(a);
			i++;
		}
	}
	else
	{
		while (i > 0)
		{	
			reverse_rotate_a(a);
			i--;
		}
	}
	push_b(a, b);
}

void	five_sort(t_stack_node **a, t_stack_node **b)
{
	int				tmp_max;
	int				i;
	t_stack_node	*tmp;

	tmp = *a;
	i = ft_lst_size(*a);
	tmp_max = find_max(*a);
	while (i > 0 && (*a)->value != tmp_max)
	{
		*a = (*a)->next;
		i--;
	}
	*a = tmp;
	exclude_max(a, b, i);
	four_sort(a, b);
	cccombo(a, b);
}

void	four_sort(t_stack_node **a, t_stack_node **b)
{
	int				tmp_max;
	int				i;
	t_stack_node	*tmp;

	tmp = *a;
	i = ft_lst_size(*a);
	tmp_max = find_max(*a);
	while (i > 0 && (*a)->value != tmp_max)
	{
		*a = (*a)->next;
		i--;
	}
	*a = tmp;
	exclude_max(a, b, i);
	three_sort(a);
	push_a(a, b);
	rotate_a(a);
}
