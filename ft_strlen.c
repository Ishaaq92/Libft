/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:31:15 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 11:21:49 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i ++;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "\t\0\0";
	printf("%ld\n", ft_strlen(str));
	printf("%ld\n", strlen(str));
}
*/
