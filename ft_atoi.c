/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:17:05 by isahmed           #+#    #+#             */
/*   Updated: 2024/11/27 18:17:08 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	total;

	i = 0;
	sign = 1;
	total = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i ++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = sign * -1;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		total = (total * 10) + (nptr[i] - 48);
		i ++;
	}
	return (sign * total);
}

// int main(void)
// {
//     printf("%d\n", ft_atoi("              +245"));
//     printf("%d", atoi("              +245"));
//     return(0);
// }
