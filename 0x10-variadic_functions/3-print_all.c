#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Print a character with an optional separator.
 * @args: The va_list containing the character argument.
 * @separator: The string to be printed between values (if not the last).
 *
 * This function prints a character from the va_list along with the specified
 * separator. If the separator is not the last character to be printed, it is
 * included; otherwise, it is omitted.
 */
void print_char(va_list args, char *separator)
{
	printf("%c%s", va_arg(args, int), separator);
}

/**
 * print_int - Print an integer with an optional separator.
 * @args: The va_list containing the integer argument.
 * @separator: The string to be printed between values (if not the last).
 *
 * This function prints an integer from the va_list along with the specified
 * separator. If the separator is not the last integer to be printed, it is
 * included; otherwise, it is omitted.
 */
void print_int(va_list args, char *separator)
{
	printf("%d%s", va_arg(args, int), separator);
}

/**
 * print_float - Print a floating-point number with an optional separator.
 * @args: The va_list containing the floating-point argument.
 * @separator: The string to be printed between values (if not the last).
 *
 * This function prints a floating-point number from the va_list along with
 * the specified separator. If the separator is not the last value to be
 * printed, it is included; otherwise, it is omitted.
 */
void print_float(va_list args, char *separator)
{
	printf("%f%s", va_arg(args, double), separator);
}

/**
 * print_string - Print a string with an optional separator.
 * @args: The va_list containing the string argument.
 * @separator: The string to be printed between values (if not the last).
 *
 * This function prints a string from the va_list along with the specified
 * separator. If the separator is not the last string to be printed, it is
 * included; otherwise, it is omitted. If the string is NULL, it prints "(nil)"
 * as a placeholder.
 */
void print_string(va_list args, char *separator)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s%s", str, separator);
}


/**
 * print_all - prints anything based on a format string
 * @format: a list of types of arguments to be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = ", ";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(args, separator);
				break;
			case 'i':
				print_int(args, separator);
				break;
			case 'f':
				print_float(args, separator);
				break;
			case 's':
				print_string(args, separator);
				break;
			default:
				separator = "";
				break;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
