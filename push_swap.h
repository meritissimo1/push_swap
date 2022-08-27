/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:15:25 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/26 15:31:28 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_node
{
	struct s_node	*next;
	struct s_node	*previous;
	int				value;
}t_node;

typedef struct s_stacks  
{
	t_node	*a;
	t_node	*b;
	int		size_a;
	int		size_b;
	int		total;
}t_stacks;

int		*ft_normalize(char **argv, int size, int *aux);
void	free_stack(t_stacks *stack, int argc);

void	check_for_errors(char **argv, int argc);
bool	ft_is_sorted(t_stacks *stack);
int		biggest(t_stacks *stack);
void	circular(t_stacks *stack);

void	sort_two(t_stacks *stacks);
void    sort_three(t_stacks *stack);
void	sort_five(t_stacks *stack);

t_node	*pop_a(t_stacks *stack);
t_node	*pop_b(t_stacks *stack);
void	connect_node(t_node *first, t_node *second);

void	radix_sort(t_stacks *stack);
void    litte_sort(t_stacks *stack);

void	swap_a(t_stacks *stack);
void	swap_b(t_stacks *stack);
void	swap_both(t_stacks *stack);

void	push_a(t_stacks *stack);
void	push_b(t_stacks *stack);
void	push_both(t_stacks *stack);

void	rotate_a(t_stacks *stack);
void	rotate_b(t_stacks *stack);
void	rotate_both(t_stacks *stack);

void	reverse_rotate_a(t_stacks *stack);
void	reverse_rotate_b(t_stacks *stack);
void	reverse_rotate_both(t_stacks *stack);

#endif