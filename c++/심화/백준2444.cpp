#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cout << setw(n - i);
		for (int p = 0; p < 2 * i + 1; ++p) cout << "*";
		cout << "\n";
	}
	for (int i = n - 2; i >= 0; --i) {
		cout << setw(n-i);
		for (int p = 0; p < 2 * i + 1; ++p) cout << "*";
		cout << "\n";
	}
}