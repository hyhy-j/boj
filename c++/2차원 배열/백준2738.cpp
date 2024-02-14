#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	int arr[100][100] = { 0 };

	for (int i = 0; i < 2; ++i) {
		for (int p = 0; p < n; ++p) {
			for (int q = 0; q < m; ++q) {
				int num;
				cin >> num;
				arr[p][q] += num;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int p = 0; p < m; ++p) {
			cout << arr[i][p] << " ";
		}
		cout << "\n";
	}
}