#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space.
 * Return: Always 0.
 */

int main(void)

{
	int count;
	unsigned long fibl = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_hald2, fib2_hald1, fib2_half2;
	unsigned long half1, half2;

	for (count = 0; count <92; count++)
	{
	sum = fib1 + fib2;
	printf(
