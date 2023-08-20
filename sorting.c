/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:18:58 by slistle           #+#    #+#             */
/*   Updated: 2023/08/20 12:37:00 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_stack_node **a, t_stack_node **b)
{
	radix_sort(a, b);
}

int	get_max_bits(t_stack_node **stack)
{
	t_stack_node	*head;
	int				max;
	int				max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*head_a;
	int				i;
	int				j;
	int				size;
	int				max_bits;

	i = 0;
	head_a = *a;
	size = ft_lst_size(head_a);
	max_bits = get_max_bits(a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *a;
			if (((head_a->index >> i) & 1) == 1)
				rotate_a(a);
			else
				push_b(a, b);
		}
		while (ft_lst_size(*b) != 0)
			push_a(a, b);
		i++;
	}
}
