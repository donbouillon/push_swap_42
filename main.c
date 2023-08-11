/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:08:32 by slistle           #+#    #+#             */
/*   Updated: 2023/08/11 18:25:22 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_error(char *msg)
{
	ft_printf("%s\n", msg);
	exit(1);
}

t_stack_list	*ft_find_last(t_stack_list *lst)
{
	if(!lst)
		return(NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

t_stack_list	*ft_new_elem(int nbr)
{
	t_stack_list	*lst;

	lst = malloc(sizeof(t_stack_list));
	if (!lst)
		return (NULL);
	lst->nbr = nbr;
	lst->next = NULL;
	return (lst);
}

void ft_add_back(t_stack_list **lst, t_stack_list *new)
{
	if (!(*lst))
		*lst = new;
	else
		ft_find_last(*lst)->next = new;
}

int main(int argc, char **argv)
{
	t_stack_list	*a;
	// t_stack_list	*b;
	t_stack_list	*new;
	int				i;
	int				nbr;
	
	a = NULL;
	i = 0;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	while (argv[i] != NULL)
	{
		nbr = ft_atoi(argv[i]);
		new = ft_new_elem(nbr);
		ft_add_back(&a, new);
		ft_printf("%d\n", new->nbr);
		i++;
	}
	return (0);
}
