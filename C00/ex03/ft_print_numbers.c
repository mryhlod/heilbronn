#include <unistd.h>


void ft_putchar(int c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char c = '0';
    while (c <= '9')
    {
        ft_putchar(c);
        c++;
    }
}

int main(void)
{
    ft_print_numbers();
    return 0;
}
