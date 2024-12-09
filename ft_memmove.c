/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:48:20 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/04 18:50:08 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	i = 0;
	if (!p_dest && !p_src)
		return (NULL);
	if (p_dest >= p_src)
	{
		while (n --)
			p_dest[n] = p_src[n];
	}
	else
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i ++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	// char	dest1[50] = "hello world";
// 	// char	dest2[50] = "hello world";
// 	// printf("%s\n", (unsigned char *) memmove(dest1+5, dest1, 10));
// 	// printf("%s\n", (unsigned char *) ft_memmove(dest2+5, dest2, 10));

// 	char	dest1[0];
// 	char	dest2[0];
// 	// printf("%s\n", (unsigned char *) memmove(dest1, dest2, 10));
// 	printf("%s\n", (unsigned char *) ft_memmove(dest1, dest2, 10));

// 	return (0);
// }
