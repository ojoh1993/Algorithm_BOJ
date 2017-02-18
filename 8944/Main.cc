#include <cstdio>
long long prob(int a[],int);
long long factorial(int, int);
int main() {

	int a[20];
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d", &a[j]);
		}
		printf("%lld\n", prob(a, N));
	}
	return 0;
}

long long prob(int a[],int size) {

	int upper = 0, lower = 0,
		upper_array[20],lower_array[20];

	if (size < 3) return 1;
	
	for (int i = 1; i < size; i++) {
		if (a[i] > a[0]) {
			upper_array[upper++] = a[i];
		}
		else if (a[i] < a[0]) {
			lower_array[lower++] = a[i];
		}
	}
	if (size == 3) {
		if (upper*lower) return 2;
		else return 1;
	}

	return (prob(upper_array, upper)*prob(lower_array, lower)*factorial(upper, lower))%9999991;

}
long long factorial(int b, int c) {
	long long result = 1;
	for (int i = c + 1; i <= b+c; i++) {
		result = (result*i) % 9999991;
	}
	for (int i = b; i > 1; i--) {
		while (1) {
			if (result%i == 0) {
				result = result / i;
				break;
			}
			else result += 9999991;
		}
	}
	return result;
}