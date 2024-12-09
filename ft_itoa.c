/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:36:41 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 16:50:52 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	*rearappend(char *str, char c)
// {
// 	char	*new_str;
// 	int		i;
// 	int		length;

// 	i = 0;
// 	length = ft_strlen(str);
// 	new_str = malloc((length + 2) * sizeof(char));
// 	new_str[0] = c;
// 	if (length == 0)
// 	{
// 		new_str[1] = 0;
// 		return (new_str);
// 	}
// 	while (str[i] != 0)
// 	{
// 		new_str[1 + i] = str[i];
// 		i ++;
// 	}
// 	new_str[1 + i] = 0;
// 	free(str);
// 	return (new_str);
// }

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
	long	num;
	int		len;
	char	*nbr;

	num = n;
	len = nbrdigits(num) + (num < 0);
	nbr = malloc(len + 1);
	if (!nbr)
		return (NULL);
	nbr[len] = 0;
	if (num < 0)
	{
		nbr[0] = '-';
		num = -num;
	}
	while (--len >= (n < 0))
	{
		nbr[len] = (num % 10) + '0';
		num /= 10;
	}
	return (nbr);
}

// int main(void)
// {
// 	char	*res;

// 	res = ft_itoa(2147483647);
// 	printf("%s", res);
// 	// printf("%d\n", nbrdigits(-2147483648));
// 	free(res);
// 	return (0);
// }
