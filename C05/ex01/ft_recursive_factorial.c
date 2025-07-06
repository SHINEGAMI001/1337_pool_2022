/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 06:05:47 by hlachhab          #+#    #+#             */
/*   Updated: 2022/04/13 19:46:30 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		i *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}
