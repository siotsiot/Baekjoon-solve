#include <stdio.h>

int main()
{
    char line[101];
    int count = 0;

    while (fgets(line, sizeof(line), stdin))
        count++;

    printf("%d", count);
    return 0;
}