/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:50:24 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/04 14:12:43 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == 0)
		return ((char *) big);
	while (i < len && big[i] != 0)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != 0 && (i + j) < len)
			j ++;
		if (little[j] == 0)
			return ((char *) &big[i]);
		i ++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	big[] = "test";
// 	char	little[] = "";
// 	printf("%s\n", ft_strnstr(big, little, 0));

// 	// char	big1[] = "";
// 	// char	little1[] = "";
// 	// printf("%s\n", strnstr(big1, little1, 0));
// }