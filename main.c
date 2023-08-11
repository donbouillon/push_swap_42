/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:08:32 by slistle           #+#    #+#             */
/*   Updated: 2023/08/11 14:41:52 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_error(char *msg)
{
	ft_printf("%s\n", msg);
	exit(1);
}

t_stack_list	*ft_last_elem(t_stack_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

t_stack_list *ft_first_elem(t_stack_list *content, int nbr)
{
	t_stack_list *lst;

	lst->content = nbr;
	lst->next = NULL;
}

void link_number(t_stack_list **stack, int nbr)
{
	t_stack_list *lst;
	t_stack_list *last_elem;
	
	lst = malloc(sizeof(t_stack_list));
	if (!lst)
		return ;
	if (*stack == NULL)
		ft_first_elem(stack, nbr);
	else
	{	
		last_elem = ft_last_elem(*stack);
		last_elem->next = nbr;
	}
	
}

void stack_init(t_stack_list **a, char **argv)
{
	int	nbr;
	int	i;

	i = 0;
	while(argv[i])
	{
		nbr = ft_atoi(argv[i]);
		link_number(a, nbr);
		ft_printf("[%d]\n", nbr);
		
		i++;
	}
}

int main(int argc, char **argv)
{
	t_stack_list	*a;
	// t_stack_list	b;
	
	a = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	stack_init(&a, argv);
}