/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:58:02 by slistle           #+#    #+#             */
/*   Updated: 2023/08/20 14:13:33 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tmp_arr;
	size_t	i;
	size_t	mult;

	i = 0;
	mult = nmemb * size;
	if (mult / size != nmemb)
		return (NULL);
	tmp_arr = (char *)malloc(mult);
	if (!tmp_arr)
		return (NULL);
	while (i < mult)
	{
		tmp_arr[i] = 0;
		i++;
	}
	return (tmp_arr);
}
