/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:25:35 by slistle           #+#    #+#             */
/*   Updated: 2023/08/20 21:17:34 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack_node *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	compare_nbr(t_stack_node *stack, int nbr)
{
	int	counter;

	counter = 0;
	while (stack)
	{
		if (nbr == stack->value)
			counter++;
		stack = stack->next;
	}
	return (counter);
}

void	a_init(char **argv, int argc, t_stack_node **a)
{
	t_stack_node	*new;
	int				i;
	long			nbr;
	char			**args;

	i = 0;
	args = NULL;
	if (argc == 2)
	{

		args = ft_split(argv[i], ' ');
	}
	else
	{
		args = argv;
		i = 1;
	}
	while (args[i] != NULL)
	{
		nbr = ft_atoi(args[i]);
		new = ft_new_elem(nbr);
		if (!new)
			ft_free_lst(a);
		ft_add_back(a, new);
		if (compare_nbr(*a, nbr) != 1)
		{
			ft_free_lst(a);
			ft_error("Error\nduplicated number\n");
		}
		i++;
	}
	ft_free_str(args);
	set_index(a);
}

int	check_str(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[0] == '-')
			i++;
		if (ft_isdigit(argv[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

void	check_nbs(int argc, char **argv)
{
	int		i;
	long	nbr;
	char	*tmp;
	char			**args;

	i = 0;
	args = NULL;
	if (argc == 2)
	{
		args = ft_split(argv[i], ' ');
	}
	else
	{
		args = argv;
		i = 1;
	}
	if (!argv)
		ft_error("Error\nargv");
	while (argv[i] != NULL)
	{
		if (check_str(argv[i]) != 0)
			ft_error("Error\nbad number\n");
		nbr = ft_atoi(argv[i]);
		tmp = ft_itoa(nbr);
		if (!tmp || ft_strncmp(tmp, argv[i], ft_strlen(argv[i])) != 0)
			ft_tmp_error("Error\nbad number\n", tmp);
		i++;
		free(tmp);
	}
	ft_free_str(args);
}
