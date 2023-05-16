#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int socks[], int socks_len) 
{
	int answer = 0;

	int* count = (int*)malloc(sizeof(int) * socks_len);
	memset(count, 0, sizeof(int) * socks_len);
	for (int i = 0; i < socks_len; i++) 
	{
		count[socks[i]]++;
	}
	for (int i = 0; i < socks_len; i++) 
	{
		answer += count[i] / 2;
	}

	return answer;
}

int main() 
{

	int socks[] = { 1,2,1,3,2,1 };
	int socks_len = 6;
	int ret = solution(socks, socks_len);

	printf("solution의 반환 값은 %d 입니다.\n", ret);

	return 0;
}