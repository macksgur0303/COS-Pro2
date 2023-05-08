// ConsoleApplication7.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution(const char* cards[][2], int cards_len)
{
    int answer = 0;
    int cnt[3] = { 0, };

    for (int i = 0; i < cards_len; i++)
    {
        if (cards[i][0] == "blue")
            cnt[0]++;
        else if (cards[i][0] == "red")
            cnt[1]++;
        else if (cards[i][0] == "black")
            cnt[2]++;

        answer += atoi(cards[i][1]);

    }

    for (int i = 0; i < cards_len; i++)
    {
        if (cnt[i] == 3)
        {
            answer *= 3;
            break;
        }

        else if (cnt[i] == 2)
        {
            answer *= 2;
            break;
        }

        return answer;
    }

}
int main()
{
    const char* cards1[][2] = { {"blue", "2"}, {"red", "5"}, {"black", "3"} };
    int cards_len1 = 3;
    int ret1 = solution(cards1, cards_len1);
    printf("solution함수의 반환 값은 %d 입니다\n", ret1);

    const char* cards2[][2] = { {"blue", "2"}, {"blue", "5"}, {"black", "3"} };
    int cards_len2 = 3;
    int ret2 = solution(cards2, cards_len2);
    printf("solution함수의 반환 값은 %d 입니다\n", ret2);
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
