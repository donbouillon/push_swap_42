/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:22:44 by slistle           #+#    #+#             */
/*   Updated: 2023/08/11 14:32:25 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack_list
{
	// int		value;
	// struct s_stack_list *target;
	struct s_stack_list *next;
	struct s_stack_list *content;
}	t_stack_list;

void stack_init(t_stack_list **a, char **argv);
void link_number(t_stack_list **stack, int nbr);
t_stack_list	*ft_last_elem(t_stack_list *lst);
void ft_error(char *msg);



# endif