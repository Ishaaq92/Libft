/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:54:35 by isahmed           #+#    #+#             */
/*   Updated: 2024/11/29 13:57:10 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_dest;
	unsigned char	*p_src;

	i = 0;
	p_dest = dest;
	p_src = (unsigned char *)src;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i ++;
	}
	return (dest);
}

// int	main(void)
// {

// 	// TEST

// 	// EDGE CASE n = { negative values}
// 	// Throws for memcpy and not for ft_memcpy
// 	char	src1[] = "hello world";
// 	char	dest1[100] = "ab";

// 	ft_memcpy(dest1, src1, 7);
// 	printf("%s\n", dest1);

// 	char	src2[] = "hello world";
// 	char	dest2[100] = "ab";

// 	memcpy(dest2, src2, 7);
// 	printf("%s\n", dest2);
// }