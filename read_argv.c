#include <unistd.h>
#include <fcntl.h>

void ft_putchar(char smvl)
{
    write(1, &smvl, 1);
}

int main(int argc, char **argv)
{
    int fd;
    char buffer;
    int rd;
    (void)argv;
    (void)argc;
    fd = open(argv[1], O_RDONLY);
    if (fd != -1)
    {
        
    while (rd)
    {
        rd = read(fd, &buffer, 1);
        ft_putchar(buffer);
    }
    }
    close(fd);
    return (0);
}