#include <unistd.h>

int ft_check(char *smvl)
{
    int i;
    i = 0;
    while (smvl[i++] != '\0')
    if (smvl[i] == 'z')
    return ('z');
return ('z');
}

int main(int argc, char **argv)
{
    char ret;
    if (argc != 1)
    {
    ret = ft_check(argv[1]);
    write(1, &ret, 1);
    write(1, "\n", 1);
}
else
{
    write(1, "z", 1);
    write(1, "\n", 1);
}
    return (0);
}