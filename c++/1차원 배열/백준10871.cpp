#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, x, num;
	// int numlist[10000] = { 0 };
	cin >> n >> x;

	for (int i = 0; i < n; ++i) {
		cin >> num;
		// numlist[i] = num;
		if (num < x) cout << num<<" ";
	}
	cout << "\n";
}