/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:30:15 by slistle           #+#    #+#             */
/*   Updated: 2023/08/20 16:04:09 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	check_nbs(argc, argv);
	a_init(argv, argc, &a);
	if (is_sorted(a) == 0)
	{
		ft_free_lst(&a);
		return (1);
	}
	if (ft_lst_size(a) <= 3)
		three_sort(&a);
	else if (ft_lst_size(a) == 4)
		four_sort(&a, &b);
	else if (ft_lst_size(a) == 5)
		five_sort(&a, &b);
	else
		sorting(&a, &b);
	ft_free_lst(&a);
	ft_free_lst(&b);
	return (0);
}
