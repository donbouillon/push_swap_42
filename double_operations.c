/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:04:20 by slistle           #+#    #+#             */
/*   Updated: 2023/08/20 12:38:55 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*tmp;

	if (!(*a) || (*a)->next == NULL)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	if (!(*b) || (*b)->next == NULL)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	ft_printf("ss\n");
}

void	rotate_a_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*tmp;

	if ((*a)->next == NULL || !(*a))
		return ;
	tmp = (*a)->next;
	(*a)->next = NULL;
	ft_add_back(&tmp, *a);
	*a = tmp;
	if ((*b)->next == NULL || !(*b))
		return ;
	tmp = (*b)->next;
	(*b)->next = NULL;
	ft_add_back(&tmp, *b);
	*b = tmp;
	ft_printf("rr\n");
}

void	reverse_rotate_a_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*tmp;
	t_stack_node	*tmp_2;

	if ((*a)->next == NULL || !(*a))
		return ;
	tmp = ft_find_last(*a);
	tmp_2 = *a;
	while (tmp_2->next->next)
		tmp_2 = tmp_2->next;
	tmp_2->next = NULL;
	ft_add_front(a, tmp);
	if ((*b)->next == NULL || !(*b))
		return ;
	tmp = ft_find_last(*b);
	tmp_2 = *b;
	while (tmp_2->next->next)
		tmp_2 = tmp_2->next;
	tmp_2->next = NULL;
	ft_add_front(b, tmp);
	ft_printf("rrr\n");
}
