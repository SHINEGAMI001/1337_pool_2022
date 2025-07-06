/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:59:32 by hlachhab          #+#    #+#             */
/*   Updated: 2022/03/27 18:14:26 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_sym(int a, char f, char m, char e)
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
				ft_print_sym(x, '/', '*', '\\');
			else if (r < y)
				ft_print_sym(x, '*', ' ', '*');
			else
				ft_print_sym(x, '\\', '*', '/');
			ft_putchar('\n');
			r++;
		}
	}
}
