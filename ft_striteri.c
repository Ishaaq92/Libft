#include <stdio.h>

void    test(unsigned int n, char *c)
{
    *c = 'k';
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int     i;

    i = 0;
    while (s[i] != 0)
    {
        f(i, &s[i]);
        i ++;
    }
}

int     main(void)
{
    char    string[] = "Hello World!";
    // printf("%s\n", string);
    ft_striteri(string, test);
    // printf("%s\n", string);
}