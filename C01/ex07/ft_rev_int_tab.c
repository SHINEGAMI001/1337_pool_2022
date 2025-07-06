/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:30:40 by hlachhab          #+#    #+#             */
/*   Updated: 2022/03/29 23:33:04 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	cnt;

	i = 0;
	cnt = size;
	size--;
	while (i < cnt / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}
