/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:43:26 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 11:43:45 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main()
// {
//     int buffer_size = 10;
//     char dest[buffer_size];
//     char src[] = "abc";

//     ft_strlcpy(dest, src, buffer_size);
//     printf("Dest: %s", dest);
//     return 0;
// }
