/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praewpruettipongsapuk <praewpruettipong    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:59:19 by praewpruett       #+#    #+#             */
/*   Updated: 2023/10/31 12:17:17 by praewpruett      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'd')
		count += print_digit(va_arg(ap, int), 10);
	else if (specifier == 'x')
		count += print_digit(va_arg(ap, unsigned int), 16); //unsigned int เพราะhexa base ไม่โชว์เครื่องหมายsign
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	my_printf(const char *format, ...)
{
	va_list	ap;
	int	count;
	count = 0; 
	
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}







int	main()
{
	int	count;

	count = my_printf("Hello %s\n", "John");
	my_printf("the chars written are %d\n", count);
}
