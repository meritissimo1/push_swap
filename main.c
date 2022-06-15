/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:37:11 by marcrodr          #+#    #+#             */
/*   Updated: 2022/06/15 11:24:05 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
void push(list *List, int value)
{
	No *new = (No *)malloc(sizeof(No));
	new->value = value;
	new->next = List->start;
	List->start = new;
	List->size++;
}*/

void insert_end(list *List, int value)
{
	Node *new = (Node *)malloc(sizeof(Node));
	Node *aux = (Node *)malloc(sizeof(Node));
	
	
	new->value = value;
	new->next = NULL;

	
	if (List->start == NULL)
		List->start = new;
	else
		aux = List->start;
	while(aux->next != NULL)
		aux = aux->next;
	aux->next = new;
}

void print(list *List)
{
	Node *start = List->start;
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
		insert_end(&List, ft_atoi(argv[count]));
		ft_putnbr_fd(ft_atoi(argv[count]), 1);		
		write(1, " ", 1);
		count++;
	}

	print(&List);
	ft_sa(&List);
	
	return (0);
}
