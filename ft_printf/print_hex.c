/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:52:54 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/24 16:33:09 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_itoh(unsigned long n, int upper, int *characters)
{
	char	*lhex;
	char	*uhex;
	char	*hex;

	lhex = "0123456789abcdef";
	uhex = "0123456789ABCDEF";
	if (upper == 1)
		hex = uhex;
	else
		hex = lhex;
	if (n >= 16)
	{
		ft_itoh(n / 16, upper, characters);
		ft_putchar(hex[n % 16], characters);
	}
	else
		ft_putchar(hex[n], characters);
}

void	ft_putlhex(unsigned long p, int *characters)
{
	ft_putstr("0x", characters);
	ft_itoh((unsigned long) p, 0, characters);
}

void	ft_putuhex(unsigned long p, int *characters)
{
	ft_putstr("0x", characters);
	ft_itoh((unsigned long) p, 1, characters);
}
