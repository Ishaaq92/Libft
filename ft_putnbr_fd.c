/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:32:14 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 17:31:26 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = (long) n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
	}
	if (number / 10 > 0)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd(((number % 10) + 48), fd);
}

// int     main(void)
// {
//     ft_putnbr_fd(-0, 2);
// }