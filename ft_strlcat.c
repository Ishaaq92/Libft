/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:20:58 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/06 17:43:14 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	dlen;
	size_t	slen;

	j = 0;
	dlen = 0;
	slen = ft_strlen(src);
	while (dlen < size && dst[dlen] != 0)
		dlen ++;
	while (src[j] != 0 && (dlen + j + 1) < size)
	{
		dst[dlen + j] = src[j];
		j ++;
	}
	if (dlen != size)
		dst[dlen + j] = 0;
	return (dlen + slen);
}

// int main()
// {
//     //char *src = "this123123123";
//     char dst[10];

// 	dst[0] = 't';
// 	dst[1] = 'e';
// 	dst[2] = 's';
// 	dst[3] = 't';
// 	int val = ft_strlcat(dst, "Hello world!", 10);
//     printf("OUTPUT of ft_strlcat: %d\n", val);
//     printf("Final String: %s\n", dst);

// 	return 0;
// }