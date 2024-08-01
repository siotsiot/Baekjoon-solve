#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;

	scanf("%d", &N);

	if (N == 1)
		printf("12 1600");
	else if (N == 2)
		printf("11 894");
	else if (N == 3)
		printf("11 1327");
	else if (N == 4)
		printf("10 1311");
	else if (N == 5)
		printf("9 1004");
	else if (N == 6)
		printf("9 1178");
	else if (N == 7)
		printf("9 1357");
	else if (N == 8)
		printf("8 837");
	else if (N == 9)
		printf("7 1055");
	else if (N == 10)
		printf("6 556");
	else if (N == 11)
		printf("6 773");

	return 0;
}