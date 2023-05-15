#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int func_a(int number)
{
	int answer1 = 0;
	int answer2 = 0;
	int number1 = number;

	while (number1 != 0)
	{
		number1 = number1 / 10;
		answer1++;
	}

	number1 = number;

	int arr[100] = { 0 };

	for (int i = 0; i < answer1; i++)
	{
		arr[i] = number1 / pow(10, answer1 - i - 1);
		number1 -= arr[i] * pow(10, answer1 - i - 1);
		if (arr[i] != 0)
			answer2 += arr[i] * pow(10, i);
	}

	return answer2;
}


int solution(int number)
{
	int answer = 0;
	int num = func_a(number);
	if (number > num)
		answer = number - num;
	else
		answer = num - number;
	return answer;
}
int main()
{
	int number1 = 120;
	int ret1 = solution(number1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int number2 = 203;
	int ret2 = solution(number2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}