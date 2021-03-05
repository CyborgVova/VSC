#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int i;

    i = 0;
    while (i != argc)
    {
    ft_putstr(argv[i]);
    i++;
    }
    return (0);
}