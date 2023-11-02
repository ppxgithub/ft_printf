/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printflearn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praewpruettipongsapuk <praewpruettipong    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:25:09 by praewpruett       #+#    #+#             */
/*   Updated: 2023/10/29 21:18:26 by praewpruett      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
//formatting options:
//%[flags][width][.precision]specifier
/*
//specifier eg d, s, f
int	main(void)
{
	//with only specifier
	printf("Hello, World!\n");
	printf("Another line of text\n");
	printf("double quote: \"\"\n");
	printf("\\\n");
	//%d is place holder telling the program that we expect another argument
	printf("int: %d\n", 4);
	
	int x = 5;
	printf("x: %d\n", x);

	//multiple place holders
	printf("%d, %d, %d \n", x, x+1, x+2);
	
	char c = 'Q';
	printf("c: %c\n", c);

	double y = 4.56; //get treated as float(%f)
	printf("y: %f\n", y);
	
	float z = 2.5;
	printf("z: %f\n", z);

	char str[] = "A string to output!\n";
	printf("str: %s", str);
	
	//width value
	printf("|||%10d|||\n", 5);
	
	//flags
	printf("|||%-10d|||\n", 5);

	//precision
	printf("|||%8.2f|||\n", y);
	printf("|||%-8.3f|||", y);
	
	return 0;
}
*/
//variadic functions : functions that can take any number of parameters 
/*
int	sum(int count, ...)
{
	va_list	args;
	va_start(args, count);
	
	int	i = 0;
	int s = 0;
	while (i < count)
	{
		int x = va_arg(args, int); //int = type of args
		s = s + x;
		i++;
	}
	va_end(args);
	return (s);
}
*/
int	sum(int count, ...)
{
	va_list	args;
	va_start(args, count);
	
	int	i = 0;
	int	s = 0;
	while (i < count)
	{
		int	x = va_arg(args, int);
		s += x;
		i++;
	}
	va_end(args);
	return (s);
}

int	main(int argc, char *argv[])
{
	printf("the sum is: %d", sum(7, 1, 2, 3, 4, 5, 6, 7));
	return (0);
}


//va_*

va_list = arg;  : data type refering to the argument list
va_start(arg1, last fixed arg);
va_arg(arg1, type of arg1);
va_end(arg1)