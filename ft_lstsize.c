/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:53:14 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/28 17:23:02 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns the number of elements in a list.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

/*
#include <stdio.h>

void	print_list(t_list *head)
{
	while (head)
	{
		printf("%p", (void *)head);
		printf("-> %s\n", (char *)head->content);
		head = head->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list *node1 = ft_lstnew("One");
	t_list *node2 = ft_lstnew("Two");
	t_list *node3 = ft_lstnew("Three");

	node1->next = node2;
	node2->next = node3;
	printf("Linked List: \n");
	print_list(node1);
	printf("List Size: %d\n", ft_lstsize(node1));

	while (node1)
	{
		t_list *temp = node1;
		node1 = node1->next;
		free(temp);
	}

	return (0);
}
*/
