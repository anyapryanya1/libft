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

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num )
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)srcptr;
	str2 = (char *)destptr;
	if (!destptr && !srcptr)
		return (NULL);
	while (i < num)
	{
		str2[i] = str1[i];
		i++;
	}
	return (str2);
}
