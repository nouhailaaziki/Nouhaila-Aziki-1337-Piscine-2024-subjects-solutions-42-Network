/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:23:59 by noaziki           #+#    #+#             */
/*   Updated: 2024/07/28 17:39:25 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	z;

	n = 0;
	while (n < size - 1)
	{
		z = n + 1;
		while (z < size)
		{
			if (tab[n] > tab[z])
				ft_swap(&tab[n], &tab[z]);
			z++;
		}
		n++;
	}
}
