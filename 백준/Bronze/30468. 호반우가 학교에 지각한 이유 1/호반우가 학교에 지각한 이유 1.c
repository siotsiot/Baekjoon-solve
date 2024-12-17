#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int STR, DEX, INT, LUK, goal_avg, count = 0;
	float average;

	scanf("%d %d %d %d %d", &STR, &DEX, &INT, &LUK, &goal_avg);

	average = (STR + DEX + INT + LUK) / 4;

	while (average < goal_avg) // average(현재 평균)가 goal_avg(목표 평균)보다 작으면
	{
		STR += 1;
		average = (STR + DEX + INT + LUK) / 4.0;
		count++;
	}

	printf("%d", count);

	return 0;
}