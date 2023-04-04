#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* s) 
{
    char* s_ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(s_ret, s);

    for (int i = 0; s_ret[i] != 0; ++i) 
    {
        if (s_ret[i] == 'a')
            s_ret[i] = 'z';
        else if (s_ret[i] == 'z')
            s_ret[i] = 'a';
    }
    return s_ret;
}

int main()
{
    int s_len = 3;
    char s[] = "abz";
    char* sum = (char*)malloc(sizeof(char) * ((s_len) + 1));

    for (int i = 0; i < s_len; i++)
    {
        sum[i] = solution(s)[i];
        printf("%c",sum[i]);
    }

    free(sum);
    return 0;
}