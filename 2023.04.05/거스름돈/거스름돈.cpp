#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price[], int price_len, int money) {
    int answer = 0;
    for (int i = 0; i < price_len; i++)
    {
        answer += price[i];
    }

    answer = money - answer;

    return answer;
}

int main()
{
    int price[] = { 2100, 3200, 2100, 800 };
    int price_len = 4;
    int money = 10000;

    int answer = solution(price, price_len, money);

    printf("고객이 지불한 돈이 %d원이므로 %d원을 거슬러 줘야 합니다.", money, answer);
}