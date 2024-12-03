/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:44:42 by isahmed           #+#    #+#             */
/*   Updated: 2024/11/29 13:48:17 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	str1[] = "hello world";
// 	char	str2[] = "hello world";

// 	ft_bzero(str1, 10);
// 	printf("%s\n", str1+10);

// 	bzero(str2, 10);
// 	printf("%s\n", str2+10);
// }
