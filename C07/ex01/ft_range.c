/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:49:29 by hlachhab          #+#    #+#             */
/*   Updated: 2022/04/14 22:19:43 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*d;

	if (min >= max)
		return (0);
	range = max - min;
	d = (int *) malloc(range * sizeof(int));
	if (!d)
		return (0);
	i = 0;
	while (i < range)
	{
		d[i] = min + i;
		i++;
	}
	return (d);
}
