/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truthe <truthe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:34:15 by truthe            #+#    #+#             */
/*   Updated: 2021/10/20 17:56:54 by truthe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	long long		k;
	long long		l;

	i = 0;
	k = 1;
	l = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{		
		if (str[i] == '-')
			k = k * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		l = l * 10 + (str[i] - '0') * k;
		i++;
		if (l > 0 && k < 0)
			return (0);
		if (l < 0 && k > 0)
			return (-1);
	}
	return (l);
}
