#include <unistd.h>

void ft_putchar(char c)
{
        write(1, &c, 1);
}

void print_wid(int x)
{
    if (x-- >= 1)
    {
        ft_putchar('A');
        while(x-- >= 2)
            ft_putchar('B');
        if (x == 0)
            ft_putchar('A');
        ft_putchar('\n');
    }
}

void print_end(int x)
{
    if (x-- >= 1)
    {
        ft_putchar('C');
        while(x-- >= 2)
            ft_putchar('B');
        if (x == 0)
            ft_putchar('C');
        ft_putchar('\n');
    }
}

void print_len(int x, int y)
{
    int space;

    if (x == 1)
    {
        while (y-- > 2)
        {
            ft_putchar('B');
            ft_putchar('\n');
        }
    }
    else
    {   
        while (y-- > 2)
        {
            ft_putchar('B');
            space = 2;
            while (x > space++)
                ft_putchar(' ');
            ft_putchar('B');
            ft_putchar('\n');
        }
    }
    
}

void rush(int x, int y)
{
    if (y >= 1)
       print_wid(x);
    print_len(x, y);
    if (y >= 2)
        print_end(x);
}

int main(void)
{
    rush(1, 5);
    return (0);
}