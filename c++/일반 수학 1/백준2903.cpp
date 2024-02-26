#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int line = 2;
	for (int i = 0; i < n; ++i) {
		line = 2 * line - 1;
	}

	cout << line * line << "\n";
}