#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int student[30] = { 0 };

	for (int i = 0; i < 28; ++i) {
		cin >> n;
		student[n-1] = 1;
	}

	for (int i = 0; i < 30; ++i) {
		if (student[i] == 0) cout << i+1 << "\n";
	}
}