/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:48:20 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 11:33:18 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_dest;
	unsigned char	*p_src;
	unsigned char	buffer[1];

	i = 0;
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	while (i < n)
	{
		buffer[0] = p_src[i];
		p_dest[i] = buffer[0];
		i ++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[50] = "hello world";
// 	printf("%s\n", (unsigned char *) memmove(dest+5, dest, 10));
// 	printf("%s\n", (unsigned char *) ft_memmove(dest+5, dest, 10));

// 	return (0);
// }
