#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int p = n-i-1; p >0; --p) cout << " ";
		for (int p = 0; p < i + 1; ++p) cout << "*";
		cout << "\n";
	}
}