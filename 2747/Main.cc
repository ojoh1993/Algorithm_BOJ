#include <cstdio>

int fibonacci(int);

int main() {


	int N;

	scanf("%d",&N);

	printf("%d", fibonacci(N));

	return 0;

}

int fibonacci(int T) {


	int a=1, b=0;
	for (int i = 1; i < T; i++){
		a += b;
		b = a - b;
	}
	return a;
}