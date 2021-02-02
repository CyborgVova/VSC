#include <stdio.h>

int main()
{
    int h, min, sec, day, mon, y;
    char *x = "PM";
    FILE *inp, *out;
    inp = fopen("input.txt", "r");
    out = fopen("output.txt", "w");
    fscanf(inp, "%d:%d:%d %d.%d.%d", &h, &min, &sec, &day, &mon, &y);
    if (h < 12)
        x = "AM";
    if (h > 12)
        h = h % 12;
    fprintf(out, "%d:%d:%d %s %d/%d/%d", h, min, sec, x, mon, day, y);
    fclose(inp);
    fclose(out);
    return 0;
}