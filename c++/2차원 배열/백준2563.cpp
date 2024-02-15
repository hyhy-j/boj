#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int arr[100][100] = { 0, };

	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;

		for (int p = 0; p < 10; ++p) {
			int x1 = x;
			for (int q = 0; q < 10; ++q) {
				arr[x1][y] = 1;
				x1 += 1;
			}
			y += 1;
			x1 = x;
		}
	}

	int num = count(&arr[0][0], &arr[0][0] + 10000, 1);
	cout << num << "\n";
}