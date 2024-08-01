#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int M, K;

	scanf("%d %d", &M, &K);

	if (M % K == 0)
		printf("Yes");
	else
		printf("No");

	return 0;
}