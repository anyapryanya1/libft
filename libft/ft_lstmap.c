/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truthe <truthe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:34:15 by truthe            #+#    #+#             */
/*   Updated: 2021/10/20 18:11:57 by truthe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*new;
	t_list	*new2;

	new = NULL;
	new2 = NULL;
	if (!lst)
		return (0);
	while (lst)
	{
		new2 = ft_lstnew(f(lst->content));
		if (!new2)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, new2);
		lst = lst->next;
	}
	return (new);
}
