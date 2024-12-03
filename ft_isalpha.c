/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:52:04 by isahmed           #+#    #+#             */
/*   Updated: 2024/11/29 11:54:05 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	return (0);
}

// int	main(void)
// {
// 	// Testing
// 	// In set, out of set, boundary values

// 	printf("ft_isalpha: %d\n", ft_isalpha(0));
// 	printf("isalpha: %d\n", isalpha(0));
// }
