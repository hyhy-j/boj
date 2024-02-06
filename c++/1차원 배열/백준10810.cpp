#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, i, j, k;
	int basket[100] = { 0 };
	cin >> n >> m;

	for (int q = 0; q < m; ++q) {
		cin >> i >> j >> k;
		for (int p = i; p < j + 1; ++p) basket[p-1] = k;
	}
	for (int r = 0; r < n; ++r) cout << basket[r];
	cout << "\n";
}