/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:15:25 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/18 10:23:02 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP
# define PUSH_SWAP

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"


typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*previous;
}t_node;

typedef struct s_stacks
{
	t_node	*a;
	t_node	*b;
	int		size_a;
	int		size_b;	
}t_stacks;

void	check_for_errors(char **argv);

void    ft_swap_a(t_stacks *stack);
void    ft_swap_b(t_stacks *stack);
void	ft_swap_both(t_stacks *stack);

void	ft_push_a(t_stacks *stack);
void	ft_push_b(t_stacks *stack);
void	ft_push_b_empty(t_stacks *stack, t_node *aux_a, t_node *aux_b);
void	ft_push_a_empty(t_stacks *stack, t_node *aux_a, t_node *aux_b);


void	ft_rotate_a(t_stacks *stack);
void	ft_rotate_b(t_stacks *stack);
void	ft_rotate_both(t_stacks *stack);

void	ft_reverse_rotate_a(t_stacks *stack);
void	ft_reverse_rotate_b(t_stacks *stack);
void	ft_reverse_rotate_both(t_stacks *stack);





#endif