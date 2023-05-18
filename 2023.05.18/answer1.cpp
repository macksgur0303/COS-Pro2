// ConsoleApplication8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int n, int vote[], int vote_len)
{
    int* count = (int*)malloc(sizeof(int) * n);
    memset(count, 0, sizeof(int) * n);
    int answer=0;

    for (int i = 0; i < vote_len; i++)
    {
        count[vote[i] - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (count[i] > vote_len / 2)
        {
            answer = i + 1;
            return answer;
        }
    }

    return -1;

}
int main()
{
    int n1 = 3;
    int vote1[7] = { 1, 2, 1, 3, 1, 2, 1 };
    int vote1_len = 7;
    int ret1 = solution(n1, vote1, vote1_len);
    printf("solution 함수의 반환 값은 %d 입니다\n", ret1);

    int n2 = 2;
    int vote2[7] = { 2, 1, 2, 1, 2, 2, 1 };
    int vote2_len = 7;
    int ret2 = solution(n2, vote2, vote2_len);
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
