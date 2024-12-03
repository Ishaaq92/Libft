/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:45:28 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 11:47:04 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
		{
			ptr = (char *)&str[i];
			return (ptr);
		}
		i ++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%s\n", ft_strchr("hello world", 100));
// 	return (0);
// }