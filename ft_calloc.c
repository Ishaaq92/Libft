/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:15:46 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/06 18:19:25 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size && nmemb > ((size_t) - 1 / size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

// int	main(void)
// {
// 	void	*ptr = calloc(8, 4);
// 	void	**ptr2 = &ptr;

// 	printf("%s\n",(char *) ft_calloc(-5, 3));
// 	printf("%s\n",(char *) calloc(-5, 3));
// }
