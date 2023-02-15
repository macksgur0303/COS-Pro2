#include <stdio.h>

int func_a(int month, int day)
{
    int month_list[] = { 31, 28 ,31 ,30, 31, 30, 31, 31, 30 ,31, 30, 31 };
    int total = 0;
    total += day - 1;
    for (int i = 0; i < month - 1; i++)
    {
        total += month_list[i];
    }

    return total;
}

int solution(int start_month, int start_day, int end_month, int end_day)
{
    int answer = 0;
    int start_total = func_a(start_month, start_day);
    int end_total = func_a(end_month, end_day);

    answer = end_total - start_total;
    return answer;
}

int main()
{
    int start_month = 1, start_day = 2, end_month = 2, end_day = 2;
    int distance = solution(start_month, start_day, end_month, end_day);

    printf("시작 일과 끝 일의 차이 = %d", distance);
}
