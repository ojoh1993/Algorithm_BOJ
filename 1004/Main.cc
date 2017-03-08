#include <iostream>
#include <cmath>
using namespace std;

bool is_inside(int x, int y, int rx, int ry, int rr) {

	if (rr<sqrt((x - rx)*(x - rx) + (y - ry)*(y - ry)))
		return false;
	else return true;
}

int main() {

	int T;
	cin >> T;
	while (T > 0) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int p,result=0;
		cin >> p;
		int x, y, r;
		for (int i = 0; i < p; i++) {
			cin >> x >> y >> r;
			if (is_inside(x1, y1, x, y, r) && is_inside(x2, y2, x, y, r))
				continue;
			else if (is_inside(x1, y1, x, y, r) || is_inside(x2, y2, x, y, r))
				result++;
		}		
		cout << result << endl;
		T--;
	}
	return 0;
}