#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define len 30
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = ((char*)malloc(sizeof(char) * strlen(my_string) + 1));
    int j = 0;
    for (int i = 0; i < strlen(my_string); i++)
    {
        if (i < s || j == strlen(overwrite_string))
            answer[i] = my_string[i];
        else
        {
            answer[i] = overwrite_string[j];
            j++;
        }
    }

    answer[strlen(my_string)] = '\0';

    return answer;
}

int main()
{
    char my_string1[len] = "He11oWor1d";
    char my_string2[len] = "Program29b8UYP";
    char overwrite_string1[len] = "lloWorl";
    char overwrite_string2[len] = "merS123";

    int s1 = 2;
    int s2 = 7;
    char *answer1 = solution(my_string1, overwrite_string1, s1);
    char *answer2 = solution(my_string2, overwrite_string2, s2);

    printf("%s\n", answer1);
    printf("%s\n", answer2);

    free(answer1);
    free(answer2);
}