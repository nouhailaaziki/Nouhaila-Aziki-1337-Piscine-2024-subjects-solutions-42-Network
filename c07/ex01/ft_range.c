/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:53:05 by noaziki           #+#    #+#             */
/*   Updated: 2024/08/13 17:42:22 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	while (i + min < max)
		i++;
	dest = (int *) malloc (i * sizeof(int));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i + min < max)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
