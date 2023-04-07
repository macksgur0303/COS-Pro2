#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int height[4][4], int height_len)
{
    int count = 0;
    for (int i = 0; i < height_len; i++)
    {
        for (int j = 0; j < height_len; j++)
        {
            if ((height[i][j] < height[i][j - 1] || j == 0) && (height[i][j] < height[i - 1][j] || i == 0)
                && (height[i][j] < height[i + 1][j] || i == height_len - 1) && (height[i][j] < height[i][j + 1] || j == height_len - 1))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
    int height_len = 4;
    int ret = solution(height, height_len);

    printf("solution 함수의 반환 값은 %d 입니다. \n", ret);
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
