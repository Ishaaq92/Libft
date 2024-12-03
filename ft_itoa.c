/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:36:41 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 12:05:55 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*rearappend(char *str, char c)
{
	char	*new_str;
	int		i;
	int		length;

	i = 0;
	length = ft_strlen(str);
	new_str = malloc((length + 2) * sizeof(char));
	new_str[0] = c;
	if (length == 0)
	{
		new_str[1] = 0;
		return (new_str);
	}
	while (str[i] != 0)
	{
		new_str[1 + i] = str[i];
		i ++;
	}
	new_str[1 + i] = 0;
	return (new_str);
}

static int	nbrdigits(long n)
{
	int	number_of_digits;

	if (n < 0)
		n = -n;
	number_of_digits = 0;
	while ((n / 10) > 0)
	{
		number_of_digits ++;
		n = n / 10;
	}
	return (number_of_digits + 1);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		number_of_digits;
	int		negative;
	long	number;

	number = (long) n;
	number_of_digits = nbrdigits(n);
	negative = (number < 0);
	nbr = malloc(sizeof(char) * (number_of_digits + 1 + negative));
	if (negative)
		number = -number;
	if (!nbr)
		return (NULL);
	while (number / 10 > 0)
	{
		nbr = rearappend(nbr, (number % 10) + 48);
		number = number / 10;
	}
	nbr = rearappend(nbr, (number % 10 + 48));
	if (negative == 1)
		nbr = rearappend(nbr, '-');
	nbr[number_of_digits + 1 + negative] = 0;
	return (nbr);
}

// int main(void)
// {
// 	char	*res;

// 	res = ft_itoa(740);
// 	printf("%s", res);
// 	// // printf("%s\n", rearappend("", '2'));
// 	// printf("%d\n", nbrdigits(-2147483648));
// 	free(res);
// 	return (0);
// }
