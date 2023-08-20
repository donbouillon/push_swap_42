/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:20:41 by slistle           #+#    #+#             */
/*   Updated: 2023/08/20 11:22:59 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_find_last(t_stack_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

t_stack_node	*ft_new_elem(int nbr)
{
	t_stack_node	*lst;

	lst = malloc(sizeof(t_stack_node));
	if (!lst)
		return (NULL);
	lst->value = nbr;
	lst->index = -1;
	lst->next = NULL;
	return (lst);
}

void	ft_add_back(t_stack_node **lst, t_stack_node *new)
{
	if (!(*lst))
		*lst = new;
	else
		ft_find_last(*lst)->next = new;
}

void	ft_add_front(t_stack_node **stack, t_stack_node *new)
{
	if (!new)
		return ;
	new->next = *stack;
	*stack = new;
}

int	ft_lst_size(t_stack_node *lst)
{
	int				i;
	t_stack_node	*tmp;

	tmp = lst;
	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
