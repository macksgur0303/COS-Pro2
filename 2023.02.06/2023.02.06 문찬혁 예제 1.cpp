#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int korean, int english)
{
	int answer = 70*3;
	answer += -korean -english;
	return answer;
}

int main()
{
	int korean = 90;
	int english = 60;
	int ret = solution(korean, english);

	printf("solution의 반환값은 %d입니다\n", ret);
}