/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 05:42:09 by hlachhab          #+#    #+#             */
/*   Updated: 2022/04/13 19:45:46 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}
