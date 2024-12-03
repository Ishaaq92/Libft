/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:50:24 by isahmed           #+#    #+#             */
/*   Updated: 2024/11/28 12:10:09 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length_little;
	char	*ptr;

	i = 0;
	j = 0;
	length_little = ft_strlen(little);
	while (i < len && big[i] != 0)
	{
		while (big[i] == little[j] && big[i] != 0)
		{
			i ++;
			j ++;
		}
		if (j == length_little)
		{
			ptr = (char *) &big[i - length_little];
			return (ptr);
		}
		j = 0;
		i ++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	big[] = "this is a test t te tes test";
// 	char	little[] = "a";
// 	printf("\n%s\n", ft_strnstr(big, little, 28));
// 	// printf("\n%d\n", strnstr(big, little, 14));
// }