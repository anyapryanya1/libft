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

int	ft_razm(int k)
{
	int	i;

	i = 1;
	if (k < 0)
	{
		i = i + 1;
		k = k * (-1);
	}
	while (k > 9)
	{
		k = k / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_razm(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * (i + 1));
	if (str == 0)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	str[i] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}
