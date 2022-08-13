/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truthe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:34:15 by truthe            #+#    #+#             */
/*   Updated: 2021/10/14 21:34:33 by truthe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (src[k])
		k++;
	if (size == 0)
		return (k);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (k);
}
