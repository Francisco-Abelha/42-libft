/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:44:41 by frgoncal          #+#    #+#             */
/*   Updated: 2025/10/17 00:37:09 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("---------------isalpha---------------\n");
	char	c1;
	int		num1;

	c1 = '4';
	num1 = ft_isalpha(c1);
	printf("%d\n", num1);

	printf("---------------isdigit---------------\n");
	char	c2;
	int		num2;

	c2 = '0';
	num2 = ft_isdigit(c2);
	printf("%d\n", num2);

	printf("---------------isalnum---------------\n");
	char	c3;
	int		num3;

	c3 = '4';
	num3 = ft_isalnum(c3);
	printf("%d\n", num3);

	printf("---------------isascii---------------\n");
	char	c4;
	int		num4;
	
	c4 = '~';
	num4 = ft_isascii(c4);
	printf("%d\n", num4);

	return (0);
}