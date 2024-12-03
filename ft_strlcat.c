/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:20:58 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 12:28:57 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(dest);
	if (n > size)
		return (n);
	while (src[i] != '\0' && i < size - n - 1)
	{
		dest[n + i] = src[i];
		i ++;
	}
	dest[n + i] = '\0';
	return (size + ft_strlen(src));
}

// int main()
// {
//     char *src = "hello ";
//     char dst[24];

//     // int val = ft_strlcat(s1, s2, 3);
//     // printf("Final length of Dest: %d\n", val);
//     printf("Final String: %s\n", src);

// 	int val = strlcat(dst, src, 3);
//     printf("Final String: %s\n", dst);
// 	return 0;
// }