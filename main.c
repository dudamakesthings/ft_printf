#include "ft_printf.h"
#include <stdio.h>
int main()
{
    char    *p = "string";
    int     original;
    int     my_len;
	
    original = printf("%p%p%p\n", &p, &p, &p);
    my_len = ft_printf("%p%p%p\n", &p, &p, &p);
    printf("this is original %d,this is my %d\n", original, my_len);
    original = printf("%c%c%d%c\n", 'a', 'b', 3, '%');
    my_len = ft_printf("%c%c%d%c\n", 'a', 'b', 3, '%');
    printf("this is original %d,this is my %d\n", original, my_len);
    //ft_printf("%c%c%d%s\n", 'a', 'b', 3, "bla");
    // ft_printf("ble%c%c%i%sbla%%%x\n", 'a', 'b', 120, "foo", 5151);
    // ft_printf("%%\n");
    // ft_printf("ble%c%c%i%sbla%%%X\n", 'a', 'b', 120, "foo", 5151);
    // printf("%%\n");
    // printf("%d\n", printf("hello"));
    // printf("%d\n", ft_printf("hello"));
    original = printf("%\0 ujruiturtiyut\n");
    my_len = ft_printf("%\0 ujruiturtiyut\n");
    printf("%d, %d\n", original, my_len);
    // int original = printf("%%%"); //someone fail me because this test, and there is a warning!
    // int my_len = ft_printf("%%%");
    // printf("this is original %d,this is my %d", original, my_len);
    original = printf("%p\n", NULL);
    my_len = ft_printf("%p\n", NULL);
    printf("this is original %d,this is my %d\n", original, my_len);
    original = printf("%s\n", NULL);
    my_len = ft_printf("%s\n", NULL);
    printf("this is original %d,this is my %d\n", original, my_len);
    original = printf("%%%%%c%%%c%%%%%s%%%%%d%%%%%%%i\n", 'a', 'b', "Integer quis blandit ligula, nec fermentum elit. Cras pretium neque sed elit volutpat commodo. Quisque vitae odio et dui consectetur interdum. Praesent et fringilla elit. Integer rutrum auctor lorem, vel blandit quam convallis eget. Integer faucibus placerat tempor. Ut sed sem viverra, ultrices dolor in, placerat eros. In finibus mi aliquet turpis aliquet, eu aliquam orci vehicula", 10, 1994);
    my_len = ft_printf("%%%%%c%%%c%%%%%s%%%%%d%%%%%%%i\n", 'a', 'b', "Integer quis blandit ligula, nec fermentum elit. Cras pretium neque sed elit volutpat commodo. Quisque vitae odio et dui consectetur interdum. Praesent et fringilla elit. Integer rutrum auctor lorem, vel blandit quam convallis eget. Integer faucibus placerat tempor. Ut sed sem viverra, ultrices dolor in, placerat eros. In finibus mi aliquet turpis aliquet, eu aliquam orci vehicula", 10, 1994);
    printf("this is original %d,this is my %d", original, my_len);
}