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

    while (argc--)
        ft_putstr(argv[argc]);
    return (0);
}