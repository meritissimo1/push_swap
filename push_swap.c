/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:15:10 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/18 09:28:49 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_end(t_stacks *stack, int value)
{
	t_node *new;
	t_node *aux;

	new = (t_node *)malloc(sizeof(t_node));
	aux = (t_node *)malloc(sizeof(t_node)); 	
	new->value = value;
	new->next = NULL;
	if(stack->a == NULL)
	{
		stack->a = new;
		new->previous = NULL; 
	}
	else
		aux = stack->a;
	while (aux->next)
		aux = aux->next;
	aux->next = new;
	new->previous = aux;
}

void	print_stack(t_stacks *stack)
{
	t_node	*start_a;
	t_node	*start_b;

	start_b = stack->b;
	start_a = stack->a;	
	while (start_a)
	{
		printf("stack_a: %d ", start_a->value);
		//printf("<-anterior: %d \n", start_a->previous->value);
		start_a = start_a->next;
	}
	printf("\n");
	 while (start_b)
	{
		printf("stack_b: %d ", start_b->value);
		start_b = start_b->next;
	}
	printf("\ntamanho de a: %d\n\n", stack->size_a);
	printf("tamanho de b: %d\n\n", stack->size_b);
}

void	init_stack(t_stacks *stack)
{
	stack->a = NULL;
	stack->b = NULL;
}

int main(int argc, char **argv)
{
	t_stacks	*stack;
	int			i;

	i = 1;
	stack = (t_stacks *)malloc(sizeof(t_stacks));
	init_stack(stack);
	check_for_errors(argv);
	stack->size_a = argc -1;
	while (argv[i])
	{
		insert_end(stack, ft_atoi(argv[i]));
		i++;
	}

	print_stack(stack);
	ft_swap_a(stack);	
	print_stack(stack);
	ft_push_b(stack);
	print_stack(stack);
	ft_push_b(stack);
	print_stack(stack);
	ft_swap_b(stack);
	ft_push_b(stack);
	print_stack(stack);
	ft_swap_both(stack);
	print_stack(stack);
	ft_rotate_a(stack);
	ft_rotate_a(stack);
	print_stack(stack);
	ft_rotate_b(stack);
	print_stack(stack);
	ft_rotate_b(stack);
	print_stack(stack);
	ft_rotate_both(stack);
	print_stack(stack);
	ft_reverse_rotate_a(stack);
	print_stack(stack);
	ft_reverse_rotate_a(stack);
	print_stack(stack);
	ft_reverse_rotate_a(stack);
	print_stack(stack);
	ft_reverse_rotate_b(stack);
	print_stack(stack);
	ft_reverse_rotate_both(stack);
	print_stack(stack);
	free(stack);
	
	return(0);
}