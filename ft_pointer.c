#include"ft_printf.h"

int ft_pointer(void *p)
{
    if (p == NULL)
    return (ft_putstr("(nil)"));
    
    unsigned long ad = (unsigned long) p;
    int count = 0;
    count += ft_putstr("0x");
    count = count + print_hex(ad);
    return count;
}