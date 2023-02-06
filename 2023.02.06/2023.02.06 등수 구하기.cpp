#include <stdio.h>

int score_len1 = 8;
int score_len2 = 4;
int i, j;

int* solution(int* score, int len)
{
	int count = 0;
	static int score1[8] = { 0 };
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (score[i] >= score[j])
			{
				count++;
			}
		}
		score1[i] = -count + len + 1;
		count = 0;
	}
	return score1;
}

int main()
{
	int score1[8] = { 90, 87, 87, 23, 35, 28, 12, 46 };
	int score2[4] = { 10, 20, 20, 30 };


	for (i = 0; i < score_len1; i++)
	{
		printf("[%d]번째 score1의 처음 점수의 값 = %d\n", i + 1, score1[i]);
	}
	for (i = 0; i < score_len2; i++)
	{
		printf("[%d]번째 score 2의 처음 점수의 값 = %d\n", i + 1, score2[i]);
	}
	printf("\n");

	int* a = solution(score1, score_len1);
	for (i = 0; i < score_len1; i++)
	{
		printf("[%d]번째 score1의 나중 점수의 값 = %d\n", i + 1, a[i]);
	}

	int* b = solution(score2, score_len2);
	for (i = 0; i < score_len2; i++)
	{
		printf("[%d]번째 score 2의 나중 점수의 값 = %d\n", i + 1, b[i]);
	}

}