#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
	int num;
	int i;
	int len;
	char *str;
	char *rev_str;

	num =  va_arg(list, unsigned int);
	len = b_length(num);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (1);
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}