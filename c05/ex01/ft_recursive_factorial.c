/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 22:09:36 by noaziki           #+#    #+#             */
/*   Updated: 2024/08/12 17:29:34 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		if (nb > 1)
		{
			r *= nb * ft_recursive_factorial(nb - 1);
			nb--;
		}
		return (r);
	}
	return (0);
}
