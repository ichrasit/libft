/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaoz <muhaoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 05:57:26 by muhaoz            #+#    #+#             */
/*   Updated: 2024/10/24 06:28:47 by muhaoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	str = malloc((nmemb * size));
	if (!str)
		return (NULL);
	ft_memset(str, '\0', nmemb * size);
	return (str);
}
