/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:32:38 by isahmed           #+#    #+#             */
/*   Updated: 2024/11/29 13:40:23 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i ++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str1[] = "hello world";
// 	char	str2[] = "hello world";

// 	printf("%s\n",(char *) ft_memset(str1, 55, (1)));
// 	printf("%s\n",(char *) memset(str2, 55, (1)));
// 	return(0);
// }