#include <stdarg.h>
#include <stdio.h>

long function_test(long n, ...)
{
	va_list ap;
	long sum;
	long numbers;

	sum = 0;
	va_start(ap, n);
	while(n)
	{
		numbers = va_arg(ap, long);
		sum = sum + numbers;
		n--;
	}
	va_end(ap);
	return (sum);
}

int main()
{
	printf("%lx\n", function_test(1, "a"));
	printf("%p", "a");
}