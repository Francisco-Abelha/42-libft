/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:05:55 by fgoncal2          #+#    #+#             */
/*   Updated: 2025/10/26 21:56:31 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_len(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}
/*
static void ft_rev(char* s) {

    int l = 0;
    int r = strlen(s) - 1;
    char t;

    while (l < r) {

        t = s[l];
        s[l] = s[r];
        s[r] = t;

        l++;
        r--;
    }
}
*/
char	*ft_itoa(int n)
{
	char	*ret;
	size_t	len;
	size_t	i;

	len = num_len(n);
	if (n < 0)
	{
		n *= -1;
		i = 1;
		ret = malloc(len + 2);
		ret[0] = '-';
		//printf("%c", ret[0]);
		while (i < len + 1)
		{
			ret[i] = (n % 10) + '0';
			//printf("%d", ret[i]);
			i++;
			n = n / 10;
		}
		ret[i] = '\0';
		//ft_rev(ret);
		//printf("string: %s\n", ret);
	}
	return (ret);
}
