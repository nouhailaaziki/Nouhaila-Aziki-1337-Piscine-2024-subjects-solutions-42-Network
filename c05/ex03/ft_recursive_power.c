/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:42:40 by noaziki           #+#    #+#             */
/*   Updated: 2024/08/12 13:49:17 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 || nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * (ft_recursive_power(nb, power - 1)));
}
