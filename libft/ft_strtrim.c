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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (*s1 && ft_strchr(set, s1[i]))
	{	
		s1++;
	}
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]) && len)
		len--;
	return (ft_substr(s1, 0, len + 1));
}
