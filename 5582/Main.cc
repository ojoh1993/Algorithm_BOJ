#pragma warning (disable:4996)
#include <cstdio>
#include <cstring>
#define MAX_STRING_LENGTH 4001
int dp_arr[MAX_STRING_LENGTH][MAX_STRING_LENGTH];

int longest_substring(char first_string[], char second_string[]);
int main() {

	char first_string[MAX_STRING_LENGTH], second_string[MAX_STRING_LENGTH];
	scanf("%s %s",&first_string,&second_string);
	printf("%d", longest_substring(first_string, second_string));
	return 0;
}
int longest_substring(char first_string[], char second_string[]) {

	int first_str_len = strlen(first_string), second_str_len = strlen(second_string);
	int result=0;

	for (int i = 1; i <= first_str_len; i++) {
		for (int j = 1; j <= second_str_len; j++) {
			if (first_string[i-1] == second_string[j-1])
				dp_arr[i][j] = dp_arr[i - 1][j - 1] + 1;
			if (result < dp_arr[i][j])
				result = dp_arr[i][j];
		}
	}


	return result;

}
