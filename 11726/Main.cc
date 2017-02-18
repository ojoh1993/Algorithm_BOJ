#include <cstdio>
#include <cstdlib>
#pragma warning (disable:4996)
int fiv10007(int);
int main() {
	int asdf;
	scanf("%d", &asdf);
	printf("%d\n", fiv10007(asdf-1));
	return 0;
}

int fiv10007(int a) {

	int result = 1, prev = 1;

	for (int i = 0; i < a; i++) {

		result = result + prev;
		prev = (result - prev)%10007;
		result = result % 10007;
	}

	return result;
}