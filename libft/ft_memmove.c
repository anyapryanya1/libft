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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src2;
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	dst1 = (char *)dst;
	src2 = (char *)src;
	if (dst1 < src2)
	{
		while (i < len)
		{
			dst1[i] = src2[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			dst1[len] = src2[len];
		}
	}
	return (dst1);
}
