// ConsoleApplication4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* func_a(int arr[], int arr_len)
{
    int* counter = (int*)malloc(sizeof(int) * 1001);

    for (int i = 0; i < 1001; i++)
        counter[i] = 0;
    for (int i = 0; i < arr_len; i++)
        counter[arr[i]]++;

    return counter;
}

int func_b(int arr[], int arr_len)
{
    int ret = 0;
    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] > ret)
            ret = arr[i]; 
    }

    return ret;
}

int func_c(int arr[], int arr_len)
{
    const int INF = 1001;
    int ret = INF;
    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] < ret && arr[i] != 0)
            ret = arr[i];
    }

    return ret;
}

int solution(int arr[], int arr_len)
{
    int* counter = func_a(arr, arr_len);
    int max_cnt = func_b(counter, arr_len);
    int min_cnt = func_c(counter, arr_len);
    
    return max_cnt / min_cnt;
}
int main()
{
    int arr[10] = { 1, 2, 3, 3, 1, 3, 3, 2, 3, 2 };
    int arr_len = 10;
    int ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 %d 입니다", ret);
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
