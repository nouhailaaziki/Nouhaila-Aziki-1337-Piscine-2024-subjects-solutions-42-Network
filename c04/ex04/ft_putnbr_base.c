/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:33:54 by noaziki           #+#    #+#             */
/*   Updated: 2024/08/15 14:39:35 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	base_len;
	int	i;
	int	j;

	i = 0;
	base_len = ft_strlen(base);
	if (base_len <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb, int size, char *base)
{
	long int	new_nb;
	long int	new_size;

	new_size = size;
	new_nb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		new_nb *= -1;
	}
	if (new_nb > new_size - 1)
	{
		ft_putnbr(new_nb / size, size, base);
		ft_putnbr(new_nb % size, size, base);
	}
	else
		ft_putchar(base[new_nb]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (!is_valid_base(base))
		return ;
	ft_putnbr(nbr, base_len, base);
}
