#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool solution(const char* password) 
{
	bool answer = 0;

	int capital_count = 0, small_count = 0, digit_count = 0;
	for (int i = 0; i < strlen(password); i++) 
	{
		if (password[i] >= 'a' && password[i] <= 'z')
			small_count++;
		else if (password[i] >= 'A' && password[i] <= 'Z')
			capital_count++;
		else if (password[i] >= '1' && password[i] <= '9')
			digit_count++;
	}

	if (capital_count >= 1 && small_count >= 2 && digit_count >= 1)
		answer = true;
	else
		answer = false;

	return answer;
}

int main() {

	const char* password1 = "helloworld";
	bool ret1 = solution(password1);
	printf("solution 함수의 변환 값은 %s 입니다.\n", ret1 ? "true" : "false");

	const char* password2 = "Hello123";
	bool ret2 = solution(password2);
	printf("solution 함수의 변환 값은 %s 입니다.\n", ret2 ? "true" : "false");

	return 0;
}