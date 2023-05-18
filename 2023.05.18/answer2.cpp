#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int calorie[], int calorie_len)
{
	int min = calorie[0];
	int answer = 0;

	for (int i = 0; i < calorie_len; i++)
	{
		if (min > calorie[i])
			min = calorie[i];
		else
			answer += calorie[i] - min;
	}

	return answer;
}

int main()
{
	int colorie[] = { 713, 665, 873, 500, 751 };
	int ret = solution(colorie, 5);
	printf("solution 함수의 반환 값은 %d 입니다", ret);
}