﻿// ConsoleApplication4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    unsigned char num1 = 32;

    num1 = num1 >> 4 << 1;

    printf("%u\n", num1);

    return 0;
}

