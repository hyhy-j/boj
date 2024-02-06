#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, i, j, change;
	int basket[100] = { 0 };
	cin >> n >> m;

	for (int p = 0; p < n; ++p) basket[p] = p + 1;

	for (int q = 0; q < m; ++q) {
		cin >> i >> j;
		reverse(basket + i - 1, basket + j);
	}

	for (int s = 0; s < n; ++s) cout << basket[s] << " ";
	cout << "\n";
}