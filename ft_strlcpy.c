/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:43:26 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/06 17:44:30 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != 0 && i < (size - 1))
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

// int main()
// {
//     int buffer_size = 10;
//     char dest[buffer_size];
//     char src[] = "abc";

//    	ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0);
//     printf("Dest: %s", dest);
//     return 0;
// }
