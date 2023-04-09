// ConsoleApplication2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int func_a(int time_table[], int time_table_len)
{
    int answer = 0;
    for (int i = time_table_len - 1; i >= 0; i--)
    {
        if (time_table[i] == 1)
        {
            answer = i;
            break;
        }
    }

    return answer;
}

int func_b(int time_table[], int class1, int class2)
{
    int answer = 0;
    for (int i = class1; i < class2; i++)
    {
        if (time_table[i] == 0)
        {
            answer++;
        }
    }

    return answer;
}

int func_c(int time_table[], int time_table_len)
{
    int answer = 0;
    for (int i = 0; i < time_table_len; i++)
    {
        if (time_table[i] == 1)
        {
            answer = i;
            break;
        }
    }

    return answer;
}

int solution(int time_table[], int time_table_len)
{
    int answer = 0;
    int first_class = func_c(time_table, time_table_len);
    int last_class = func_a(time_table, time_table_len);

    answer = func_b(time_table, first_class, last_class);

    return answer;
}

int main()
{
    int time_table[] = { 1, 1, 0, 0, 1, 0, 1, 0, 0, 0 };
    int time_table_len = 10;
    int ret = solution(time_table, time_table_len);

    printf("solution 함수의 반환 값은 %d 입니다,\n", ret);
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
