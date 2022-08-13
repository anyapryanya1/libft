/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truthe <truthe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:34:15 by truthe            #+#    #+#             */
/*   Updated: 2021/10/19 18:03:14 by truthe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	char	*r;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	r = (char *)s;
	if ((size_t)ft_strlen(r) < len)
		len = ft_strlen(r);
	s1 = malloc(sizeof(char) * (len + 1));
	if (s1 == 0)
		return (NULL);
	if (start < (unsigned int)ft_strlen(r))
	{
		while (i < len)
		{
			s1[i] = s[start];
			start++;
			i++;
		}
	}
	s1[i] = '\0';
	return (s1);
}
