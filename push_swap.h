/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:22:44 by slistle           #+#    #+#             */
/*   Updated: 2023/08/11 17:26:35 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack_list
{
	int		nbr;
	// struct s_stack_list *target;
	struct s_stack_list *next;
	struct s_stack_list *content;
}	t_stack_list;

void ft_add_back(t_stack_list **lst, t_stack_list *new);
t_stack_list	*ft_new_elem(int nbr);
t_stack_list	*ft_find_last(t_stack_list *lst);
void ft_error(char *msg);



# endif