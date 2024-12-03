/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:15:46 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/02 14:17:23 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}

// int	main(void)
// {
// 	char	*str = ft_calloc(11, 0);
// 	int	i = 0;
// 	while (i <= 16)
// 	{
// 		str[i] = 'J';
// 		i ++;
// 	}
// 	printf("StrinPHONY: all clean fclean re bonusg str = %s\n", str);
// 	printf("Sizeof(str) = %zu\n", ft_strlen(str));

// 	char	*test = calloc(11, 0);
// 	int	j = 0;
// 	while (j <= 16)
// 	{
// 		test[j] = 'J';
// 		j ++;
// 	}
// 	printf("String test = %s\n", test);
// 	printf("Sizeof(test) = %zu\n", ft_strlen(test));

// 	if (test == str)
// 		printf("SUCCESS");
// 	else
// 		printf("FAILURE");

// 	return (0);
// }
