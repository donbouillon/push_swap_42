/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:12:57 by slistle           #+#    #+#             */
/*   Updated: 2023/08/09 17:13:42 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str_res;

	i = 0;
	j = 0;
	if (!s1)
		return (ft_strdup(""));
	str_res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str_res)
		return (NULL);
	while (s1[i] != '\0')
	{
		str_res[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{	
		str_res[i] = s2[j];
		i++;
		j++;
	}
	str_res[i] = '\0';
	return (str_res);
}
