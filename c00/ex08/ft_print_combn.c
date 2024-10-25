/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:27:37 by noaziki           #+#    #+#             */
/*   Updated: 2024/08/02 21:41:25 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_digits(char *digits, int n)
{
    int i = 0;
    while (i < n)
    {
        ft_putchar(digits[i]);
        i++;
    }
}

void ft_print_combn(int n)
{
    char digits[10];
    int i;

    if (n <= 0 || n >= 10)
        return;

    i = 0;
    while (i < n)
    {
        digits[i] = '0' + i;
        i++;
    }

    while (1)
    {
        print_digits(digits, n);
        if (digits[0] == '9' - n + 1)
            break;
        write(1, ", ", 2);

        i = n - 1;
        while (i >= 0 && digits[i] == '9' - n + i + 1)
            i--;

        if (i >= 0)
        {
            digits[i]++;
            int j = i + 1;
            while (j < n)
            {
                digits[j] = digits[j - 1] + 1;
                j++;
            }
        }
    }
}

int main(void)
{
    ft_print_combn(2);
	return 0;
}
