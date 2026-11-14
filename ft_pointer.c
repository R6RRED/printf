#include"printf.h"

int ft_pointer(void *p)
{
    unsigned long ad = (unsigned long) p;
    int count = 0;
    ft_putstr("0x");
    count = count + print_hex(ad);
    return count;
}