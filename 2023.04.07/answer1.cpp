#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int num_apple, int num_carrot, int k)
{
    int answer = 0;
    if (num_apple < 3 * num_carrot)
        answer = num_apple / 3;
    else
        answer = num_carrot;

    num_apple -= 3 * answer;
    num_carrot -= answer;

    for (int i = 0; k - (num_apple + num_carrot + i) > 0; i++)
        if (i % 4)
            answer--;

    return answer;
}
int main()
{
    int num_apple1 = 5;
    int num_carrot1 = 1;
    int k1 = 2;
    int ret1 = solution(num_apple1, num_carrot1, k1);
    printf("solution 함수의 반환 값은 %d 입니다. \n", ret1);

    int num_apple2 = 10;
    int num_carrot2 = 5;
    int k2 = 2;
    int ret2 = solution(num_apple2, num_carrot2, k2);
    printf("solution 함수의 반환 값은 %d 입니다. \n", ret2);
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
