#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(const char* words[], int words_len, const char* word) 
{
	int answer = 0;

	int size = strlen(word);

	for (int i = 0; i < words_len; i++) 
	{
		for (int j = 0; j < size; j++) 
		{
			if (word[j] != words[i][j]) 
			{
				answer++;
			}
		}
	}

	return answer;
}


int main() 
{
	const char* words[] = {"CODE","COED","CDEO"};
	int words_len = 3;
	const char* word = "CODE";
	int ret = solution(words, words_len, word);
	printf("solution 함수의 반환 값은 %d 입니다\n", ret);

	return 0;
}