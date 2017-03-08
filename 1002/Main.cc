#include <cstdio>
#include <cmath>
#include <cstdlib>
int compare(const void *a, const void *b) {
	if (*(double*)a > *(double*)b) return 1;
	else if (*(double*)a == *(double*)b) return 0;
	else return -1;
}
int main() {
	int T;
	scanf("%d", &T);

	int x1, x2, y1, y2, r1, r2;
	double r[3];
	while (T>0) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		r[0] = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		r[1] = (double)r1; r[2] = (double)r2;
		qsort(r, 3, sizeof(double), compare);
		
		if (r[0] == 0 && r[1] > 0 && r[1] == r[2]) printf("-1\n");
		else if (r[2] < r[1] + r[0]) printf("2\n");
		else if (r[2] == r[1] + r[0])  printf("1\n");
		else printf("0\n");

		T--;
	}
	return 0;
}