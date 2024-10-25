/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:45:46 by noaziki           #+#    #+#             */
/*   Updated: 2024/08/07 14:25:39 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ls;
	unsigned int	ld;
	unsigned int	i;

	ls = 0;
	ld = 0;
	i = 0;
	while (dest[ld] != '\0' && ld < size)
		ld++;
	while (src[ls] != '\0')
		ls++;
	if (ld == size)
		return (size + ls);
	while (src[i] != '\0' && ld + i < size - 1)
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (ld + ls);
}
