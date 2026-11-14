#include"printf.h"
#include <limits.h>
int print_hex(unsigned int n)
{
    char *hex="0123456789abcdef";
    int counter = 0;
    if(n < 16)
    {
        ft_putchar(hex[n]);
        counter += 1;
    }
    else
    {
        counter = counter + print_hex(n / 16);
        ft_putchar(hex[n % 16]);
        counter = counter + 1;
    }return counter;

}
// int main()
// {
//     print_hex(INT_MIN);
//     return 0;
// }