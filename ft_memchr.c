/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:33:45 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/05 10:11:48 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p_src;
	unsigned char	*ptr;

	i = 0;
	if (n == 0)
		return (NULL);
	p_src = (unsigned char *) s;
	if (c == 0)
	{
		while (p_src[i] != 0)
			i ++;
		ptr = &p_src[i];
		return (ptr);
	}
	while (i < n)
	{
		if (p_src[i] == (unsigned char) c)
		{
			ptr = &p_src[i];
			return (ptr);
		}
		i ++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s[] = {0, 1, 2, 3, 4, 5};
// 	printf("ft_memchr: %s\n", (char*) ft_memchr(s, 50, 5));
// 	printf("memchr: %s\n", (char*) memchr(s, 50, 5));

// 	return (0);
// }