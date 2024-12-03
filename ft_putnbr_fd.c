#include <unistd.h>
#include <stdio.h>

int power(int n, int m)
{
    int     total;

    total = n;
    if (m == 0)
        return (1);
    while (m > 1)
    {
        total = total * n;
        m --;
    }
    return (total);
}

int     nbrofdigits(int n)
{
    int     digits;

    digits = 0;
    while (n / 10 > 0)
    {
        digits ++;
        n = n / 10;
    }
    return (digits + 1);
}

void ft_putnbr_fd(int n, int fd)
{
    int     i;
    int     digits;

    i = 0;
    digits = nbrofdigits(n);
    // while ((n / 10) > 0)
    // {
    //     write(fd, )
    // }
}


int     main(void)
{
    printf("%d\n", power(5, 0));
}