#include"printf.h"

int pointer(void *p)
{
    void *pt = &p;
    ft_putstr("0x");
    ft_putstr(ft_puthexa(&pt));
    

}