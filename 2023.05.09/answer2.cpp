
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int speed, int cars[], int cars_len)
{
    int answer = 0;
    for (int i = 0; i < cars_len; i++)
    {
        if (cars[i] >= speed + (speed * 10 / 100) && cars[i] < speed + (speed * 20 / 100))
            answer += 30000;
        else if (cars[i] >= speed + (speed * 20 / 100) && cars[i] < speed + (speed * 30 / 100))
            answer += 50000;
        else if (cars[i] >= speed + (speed * 30 / 100))
            answer += 70000;

    }
    return answer;
}
int main()
{
    int speed = 100;
    int cars[] = { 110, 98, 125, 148, 120, 112, 89 };
    int cars_len = 7;
    int ret = solution(speed, cars, cars_len);

    printf("solution함수의 반환 값은 %d 입니다", ret);

}