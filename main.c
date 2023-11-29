#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *p = "string";
	// ft_printf("%c%c%d%c\n", 'a', 'b', 3, '%');
	// ft_printf("%c%c%d%s\n", 'a', 'b', 3, "bla");
	// ft_printf("ble%c%c%i%sbla%%%x\n", 'a', 'b', 120, "foo", 5151);
	// ft_printf("%%\n");
	// ft_printf("ble%c%c%i%sbla%%%X\n", 'a', 'b', 120, "foo", 5151);
	// printf("%%\n");
	// printf("%d\n", printf("hello"));
	// printf("%d\n", ft_printf("hello"));
	// int  original = printf("%\0 ujruiturtiyut");
	// int my_len = ft_printf("%\0 ujruiturtiyut");
	// printf("%d, %d", original, my_len);
	// int original = printf("%%%"); //someone fail me because this test, and there is a warning!
	// int my_len = ft_printf("%%%");
	// printf("this is original %d,this is my %d", original, my_len);
	// int original = printf("%p", NULL);
	// int my_len = ft_printf("%p", NULL);
	// printf("this is original %d,this is my %d", original, my_len);
	int original = printf("%c\n", 0);
	int my_len = ft_printf("%c\n", 0);
	printf("this is original %d,this is my %d", original, my_len);
}