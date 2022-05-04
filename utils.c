/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr < marcrodr@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:42:32 by marcrodr          #+#    #+#             */
/*   Updated: 2022/04/27 16:37:22 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_isalpha(int n)
{
	if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	signal;

	i = 0;
	result = 0;
	signal = 1;
	while (ft_isalpha(str[i]))
		exit(1);
	if (str[i] == '-' || str[i] == '+')
	{
		while ( str[i] == '-' || str[i] == '+' )
		{
			if (str[i] == '-')
				signal = signal * -1;
			else if (str[i] == '+')
				signal = 1;
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((result * 10) + str[i] - '0' >= INT_MAX)
			return (INT_MAX);
		if ((result * 10) + str[i] - '0' <= INT_MIN)
			return (INT_MIN);
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (signal * result);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)n * -1;
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10) + 48, fd);
}