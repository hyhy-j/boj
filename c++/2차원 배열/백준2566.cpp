#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[9][9] = { 0 };
	int maxval = 0, index1, index2;

	for (int i = 0; i < 9; ++i) {
		for (int p = 0; p < 9; ++p) {
			int num;
			cin >> num;
			if (num > maxval) {
				maxval = num;
				index1 = i;
				index2 = p;
			}
		}
	}

	cout << maxval << "\n" << index1 + 1 << " " << index2 + 1 << "\n";
}