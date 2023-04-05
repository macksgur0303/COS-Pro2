#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_row_len은 2차원 배열 arr의 행(세로) 길이입니다.
// arr_col_len은 2차원 배열 arr의 열(가로) 길이입니다.
// arr[i][j]는 arr의 i번째 행의 j번째 열에 저장된 값을 의미합니다.
int solution(int arr[][4], int arr_row_len, int arr_col_len, int k) {
    int answer = 0;
    int min_num = 1000;
    int tmp, row, col;

    for (int i = 0; i < arr_row_len; i++)
    {
        for (int j = 0; j < arr_col_len; j++)
        {
            for (int z = 0; z < arr_row_len; z++)
            {
                for (int a = 0; a < arr_col_len; a++)
                {
                    if (arr[i][j] < arr[z][a])
                    {
                        tmp = arr[i][j];
                        arr[i][j] = arr[z][a];
                        arr[z][a] = tmp;
                    }
                }
            }
        }
    }

    row = k / arr_col_len;
    col = k % arr_col_len;
    if (col == 0) // "조건에서 arr의 요소는 1 이상 1,000 이하의 자연수이며, 같은 수가 중복해서 들어있지 않습니다." 라 함으로 row == 0 && col == 0은 가정하지 않음
    {
        answer = arr[row - 1][arr_col_len - 1];
    }

    else
    {
        answer = arr[row][col - 1];
    }

    return answer;
}

int main()
{
    int arr[][4] = { {5,12,4,31},{24,13,11,2},{43,44,19,26},{33,65,20,21} };
    int arr_row_len = 4;
    int arr_col_len = 4;
    int k = 4;

    int answer = solution(arr, arr_row_len, arr_col_len, k);

    printf("%d번째로 작은 수는 %d입니다.", k, answer);
}