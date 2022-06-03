/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:37:11 by marcrodr          #+#    #+#             */
/*   Updated: 2022/05/07 00:37:10 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(list *List, int value)
{
	No *new = (No *)malloc(sizeof(No));
	new->value = value;
	new->next = List->start;
	List->start = new;
	List->size++;
}

void print(list *List)
{
	No *start = List->start;
	while (start != NULL)
	{
		printf(" -%d- ", start->value);
		start = start->next;
	}
}

int	main(int arg, char **argv)
{
	int		count;
	char	*str;
	list	List;
	List.start = NULL;
	List.size = 0;

	count = 1;
	while (argv[count] != 0)
	{
		push(&List, ft_atoi(argv[count]));
		ft_putnbr_fd(ft_atoi(argv[count]), 1);		
		write(1, " ", 1);
		count++;
	}
	print(&List);

	
	return (0);
}
