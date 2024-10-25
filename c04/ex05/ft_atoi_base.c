/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:49:24 by noaziki           #+#    #+#             */
/*   Updated: 2024/08/15 14:45:31 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	is_digit(int c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
		if (base[i++] == c)
			return (1);
	return (0);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
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

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
		if (base[i++] == c)
			return (i - 1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	result;
	int			i;
	int			sign;
	int			size;

	size = 0;
	while (base[size])
		size++;
	if (!is_valid_base(base) || size <= 1)
		return (0);
	result = 0;
	i = 0;
	sign = 1;
	while (str[i] && is_space(str[i]))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && is_digit(str[i], base))
		result = result * size + get_index(str[i++], base);
	return (sign * result);
}
