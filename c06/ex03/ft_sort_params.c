/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 09:28:17 by noaziki           #+#    #+#             */
/*   Updated: 2024/08/11 12:26:51 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	i;

	a = 1;
	i = 0;
	if (ac > 1)
	{
		while (a < ac)
		{
			b = a + 1;
			while (b < ac)
			{
				if ((ft_strcmp(av[a], av[b])) > 0)
					ft_swap(&av[a], &av[b]);
				b++;
			}
			a++;
		}
		a = 1;
		while (a < ac)
			ft_putstr(av[a++]);
	}
}
