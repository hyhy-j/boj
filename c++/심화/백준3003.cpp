#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int chess[6] = { 1,1,2,2,2,8 };
	int dong[6];

	for (int i = 0; i < 6; ++i) {
		cin >> dong[i];
		cout << chess[i] - dong[i] << " ";
		cout << "\n";
	}
	// cout << "\n";
}