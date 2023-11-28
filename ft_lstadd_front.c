/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:29:30 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/28 17:21:45 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function allows us to add a new element to the beginning of a given list.
It takes in both the new element and the existing list as inputs.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>

void	print_list(t_list *head)
{
	while (head)
	{
		printf("%p -> ", (void *)head);
		printf("%d\n", *(int *)(head->content));
		head = head->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	int value1 = 42;
	int value2 = 99;

	t_list *node1 = ft_lstnew(&value1);
	t_list *node2 = ft_lstnew(&value2);

	t_list *head = NULL;

	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);

	printf("Linked List after adding elements to the front:\n");
	print_list(head);

	free(node1);
	free(node2);

	return (0);
}
*/
