#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T, d, n, s, p;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d %d", &d, &n, &s, &p);

		if (n * s < d + n * p)
			printf("do not parallelize\n");
		else if (n * s > d + n * p)
			printf("parallelize\n");
		else
			printf("does not matter\n");
	}

	return 0;
}