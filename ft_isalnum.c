/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:06:44 by isahmed           #+#    #+#             */
/*   Updated: 2024/11/29 12:18:42 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_isalnum(57));
	printf("%d\n", isalnum(57));
	
}
*/
