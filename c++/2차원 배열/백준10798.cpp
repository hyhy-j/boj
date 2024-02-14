#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char arr[5][16] = {};

	for (int i = 0; i < 5; ++i) cin >> arr[i];

	for (int i = 0; i < 15; ++i) {
		for (int p = 0; p < 5; ++p) {
			if (arr[p][i] != '\0') cout << arr[p][i];
		}
	}
	cout << "\n";
}