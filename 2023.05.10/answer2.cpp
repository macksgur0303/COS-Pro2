// ConsoleApplication2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int member_age[], int member_age_len, const char* transportations)
{
    int answer = 0;
    int num1, num2;
    if (transportations == "Bus")
    {
        num1 = 40000;
        num2 = 15000;
    }

    else if (transportations == "Ship")
    {
        num1 = 30000;
        num2 = 13000;
    }

    else if (transportations == "Airplane")
    {
        num1 = 70000;
        num2 = 45000;
    }

    if (member_age_len >= 10)
    {
        for (int i = 0; i < member_age_len; i++)
        {
            if (member_age[i] < 20)
            {
                answer += num2 + (num2 * 20 / 100);
            }
            else
            {
                answer += num1 + (num1 * 10 / 100);
            }
        }
    }
    else
    {
        for (int i = 0; i < member_age_len; i++)
        {
            if (member_age[i] < 20)
            {
                answer += num2;
            }
            else
            {
                answer += num1;
            }
        }
    }

    return answer;
}
int main()
{
    int member_age1[] = { 13, 33, 45, 11, 20 };
    int member_age1_len = 5;
    const char* transportations1 = "Bus";
    int ret1 = solution(member_age1, member_age1_len, transportations1);
    printf("solution 함수의 반환 값은 %d 입니다\n", ret1);

    int member_age2[] = { 25, 11, 27, 56, 7, 19, 52, 31, 77, 8 };
    int member_age2_len = 10;
    const char* transportations2 = "Ship";
    int ret2 = solution(member_age2, member_age2_len, transportations2);
    printf("solution 함수의 반환 값은 %d 입니다\n", ret2);
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
