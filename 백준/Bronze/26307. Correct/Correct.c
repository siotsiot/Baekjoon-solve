#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int HH, MM, total_minutes;

    scanf("%d %d", &HH, &MM);

    total_minutes = (HH - 9) * 60 + MM;

    printf("%d", total_minutes);

    return 0;
}