/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:43:14 by noaziki           #+#    #+#             */
/*   Updated: 2024/08/15 22:06:41 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_separator(*str, charset))
			str++;
		if (*str && !is_separator(*str, charset))
		{
			count++;
			while (*str && !is_separator(*str, charset))
				str++;
		}
	}
	return (count);
}

char	*ft_strdup(char *src, int len)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(len + 1);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		len;

	i = 0;
	result = (char **)malloc((word_count(str, charset) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str && is_separator(*str, charset))
			str++;
		len = 0;
		while (str[len] && !is_separator(str[len], charset))
			len++;
		if (len > 0)
		{
			result[i++] = ft_strdup(str, len);
			str += len;
		}
	}
	result[i] = 0;
	return (result);
}
