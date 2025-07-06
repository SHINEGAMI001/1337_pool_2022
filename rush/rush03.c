/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:17:40 by hlachhab          #+#    #+#             */
/*   Updated: 2022/03/29 14:38:10 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(int a, char f, char m, char e)
{
	int	i;

	i = 1;
	while (i <= a)
	{
		if (i == 1)
			ft_putchar (f);
		else if (i < a)
			ft_putchar (m);
		else
			ft_putchar (e);
		i++;
	}
}

void	rush(int x, int y)
{
	int	r;

	if (x >= 1 && y >= 1)
	{
		r = 1;
		while (r <= y)
		{
			if (r == 1)
				ft_print_alphabet(x, 'A', 'B', 'C');
			else if (r <= y)
				ft_print_alphabet(x, 'B', ' ', 'B');
			else
				ft_print_alphabet(x, 'A', 'B', 'C');
			ft_putchar ('\n');
			r++;
		}
	}
}
