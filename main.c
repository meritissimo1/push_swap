/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr < marcrodr@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:37:11 by marcrodr          #+#    #+#             */
/*   Updated: 2022/04/27 18:10:22 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int arg, char **argv)
{
	int		count;
	char	*str;

	count = 1;
	while (argv[count] != 0)
	{
		ft_putnbr_fd(ft_atoi(argv[count]), 1);
		write(1, " ", 1);
		count++;
	}
	return (0);
}
