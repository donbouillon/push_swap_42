/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:26:10 by slistle           #+#    #+#             */
/*   Updated: 2023/08/20 12:36:37 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *msg)
{
	write(2, msg, ft_strlen(msg));
	exit(1);
}

void	ft_tmp_error(char *msg, char *tmp)
{
	write(2, msg, ft_strlen(msg));
	free(tmp);
	exit(1);
}
