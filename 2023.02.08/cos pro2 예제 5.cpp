#include <stdio.h>

int solution(int price, char* grade)
{
	int answer = 0;
	double percent;
	int sale;

	if (*grade == 'S')
	{
		percent = 5.0;
	}
	else if (*grade == 'G')
	{
		percent = 10.0;
	}
	else if (*grade == 'V')
	{
		percent = 15.0;
	}
	sale = price * percent / 100;
	answer = price - sale;

	return answer;
}

int main()
{
	int price1 = 2500;
	int price2 = 96900;
	char grade1 = 'V';
	char grade2 = 'S';

	int sale_price = solution(price1, &grade1);
	printf("할인 된 가격 = %d\n", sale_price);

	sale_price = solution(price2, &grade2);
	printf("할인 된 가격 = %d\n", sale_price);
}