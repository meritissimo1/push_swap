/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:11:03 by marcrodr          #+#    #+#             */
/*   Updated: 2022/06/15 11:24:12 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(list *stack)
{
	Node *new	 =	stack->start;
//  new = new->next->next; // proximo do proximo
	printf("\ntopo-> %d\n", new->value);
	printf("\nnext-> %d\n", new->next->value);
	
	//*new->next = *new->value;
	//(int *)*new->next ^= new->value;
//	new->value ^= (int)new->next;
//	*(int)new->next ^= new->value;								


	//printf("\nstart-> %d\n", *stack->start);
	//printf("\nnext-> %d\n", *new->next);
   // stack->start = new->next;
	
	//printf("\nstart-> %d\n", *stack->start);
	//printf("\nnext-> %d\n", *new->next);

}
