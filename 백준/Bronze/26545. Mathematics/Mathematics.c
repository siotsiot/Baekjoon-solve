#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, n, sum = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &n);
		sum += n;
	}
	printf("%d", sum);

	return 0;
}