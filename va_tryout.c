/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_tryout.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praewpruettipongsapuk <praewpruettipong    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:26:58 by praewpruett       #+#    #+#             */
/*   Updated: 2023/10/30 12:31:37 by praewpruett      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	sum(int count, ...)
{
	va_list	args;
	va_start(args, count);
	int	i = 0;
	int s = 0;

	while (i < count)
	{
		s += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (s);
}

int	main()
{
	printf("The sum is: %d\n", sum(4, 1, 4, 7, 9));
	return (0);
}