#include <iostream>
using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;
	if (m >= 45) {
		cout << h << " " << m - 45 << endl;
	}
	else {
		if (h == 0) h = 24;
		cout << h-1 << " " << m + 15;
	}
}