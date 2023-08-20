/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:21:45 by slistle           #+#    #+#             */
/*   Updated: 2023/08/20 11:21:37 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*get_min(t_stack_node **stack)
{
	t_stack_node	*head;
	t_stack_node	*min;
	int				ismin;

	min = NULL;
	ismin = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!ismin || head->value < min->value))
			{
				min = head;
				ismin = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	set_index(t_stack_node **stack)
{
	t_stack_node	*head;
	int				index;

	index = 0;
	head = get_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_min(stack);
	}
}
