/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:37:59 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 11:38:43 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (p1[i] == p2[i] && i < n)
		i ++;
	if (i == n)
		return (0);
	return (p1[i] - p2[i]);
}

// int main(void)
// {
//     printf("%d\n", ft_memcmp("hello9", "hello6", 6));
//     return (0);
// }