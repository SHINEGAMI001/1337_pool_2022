/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:57:46 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/06 22:23:09 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_sym(int a, char f, char m, char e)
{
	int		i;

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
				r = 1;
		while (r <= y)
		{
			if (r == 1 || r == y)
				ft_print_sym(x, 'o', '-', 'o');
			else
				ft_print_sym(x, '|', ' ', '|');
			ft_putchar('\n');
			r++;
		}
}
