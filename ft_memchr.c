/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:33:45 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 11:37:02 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p_src;
	unsigned char	*ptr;

	i = 0;
	p_src = (unsigned char *) s;
	while (p_src[i] != 0 && i < n)
	{
		if (p_src[i] == (unsigned char) c)
		{
			ptr = &p_src[i];
			return (ptr);
		}
		i ++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%p\n", ft_memchr("Hello World!", 101, 12));
// 	printf("%p\n", memchr("Hello World!", 101, 12));

// 	return (0);
// }