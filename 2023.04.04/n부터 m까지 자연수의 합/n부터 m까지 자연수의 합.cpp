#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int k) 
{
    int sum = 0;
    for (int i = 0; i < k ; ++i)
        sum += i + 1;
    return sum;
}

int solution(int n, int m) {
    int sum_to_m = func_a(m);
    int sum_to_n = func_a(n - 1);
    int answer = sum_to_m - sum_to_n;
    return answer;
}

int main()
{
    int n1 = 5;
    int n2 = 6;
    int m1 = 10;
    int m2 = 6;

    int sum1 = solution(n1, m1);
    int sum2 = solution(n2, m2);

    printf("%d부터 %d까지의 자연수의 합은 %d입니다", n1, m1, sum1);
    printf("%d부터 %d까지의 자연수의 합은 %d입니다", n2, m2, sum2);
}