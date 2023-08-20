/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationc_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:35:16 by slistle           #+#    #+#             */
/*   Updated: 2023/08/20 14:08:53 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack_node **stack)
{
	t_stack_node	*tmp;

	if ((*stack)->next == NULL || !(*stack))
		return ;
	tmp = (*stack)->next;
	(*stack)->next = NULL;
	ft_add_back(&tmp, *stack);
	*stack = tmp;
	ft_printf("ra\n");
}

void	rotate_b(t_stack_node **stack)
{
	t_stack_node	*tmp;

	if ((*stack)->next == NULL || !(*stack))
		return ;
	tmp = (*stack)->next;
	(*stack)->next = NULL;
	ft_add_back(&tmp, *stack);
	*stack = tmp;
	ft_printf("rb\n");
}

void	reverse_rotate_a(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*tmp_2;

	if ((*stack)->next == NULL || !(*stack))
		return ;
	tmp = ft_find_last(*stack);
	tmp_2 = *stack;
	while (tmp_2->next->next)
		tmp_2 = tmp_2->next;
	tmp_2->next = NULL;
	ft_add_front(stack, tmp);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*tmp_2;

	if ((*stack)->next == NULL || !(*stack))
		return ;
	tmp = ft_find_last(*stack);
	tmp_2 = *stack;
	while (tmp_2->next->next)
		tmp_2 = tmp_2->next;
	tmp_2->next = NULL;
	ft_add_front(stack, tmp);
	ft_printf("rrb\n");
}

void	cccombo(t_stack_node **a, t_stack_node **b)
{
	if (ft_find_last(*a)->value < (*b)-> value)
	{
		push_a(a, b);
		rotate_a(a);
	}
	else
	{
		reverse_rotate_a(a);
		push_a(a, b);
		rotate_a(a);
		rotate_a(a);
	}
}
