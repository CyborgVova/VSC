#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUFFER 2000
int main(int argc, char **argv)
{
    int fd;
    int rd;
    char *file;

    if ((fd = open(argv[1], O_RDONLY)) == -1)
    write(1, "-1\n", 3);
    if (!(file = (char*)malloc(BUFFER + 1)))
    write(1, "-2\n", 3);
    if ((rd = read(fd, file, BUFFER)) == -1)
    write(1, "-3\n", 3);
    file[rd] = '\0';
    write(1, file, rd);
    close(fd);
    free(file);
    return (0);
}