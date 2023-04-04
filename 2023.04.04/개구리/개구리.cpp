#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int stones[], int stones_len) 
{
    int cnt = 0;
    int current = 0;
    while (current <= stones_len - 1) 
    {
        current += stones[current];
        cnt++;
    }
    return cnt;
}

int main()
{
    int stones[] = { 2, 5, 1, 3, 2, 1 };
    int stones_len = 6;

    int sum = solution(stones, stones_len);

    printf("개구리는 총 %d번 점프하여 모든 징검다리를 건넜습니다.", sum);
}