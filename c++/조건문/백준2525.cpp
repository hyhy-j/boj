#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	cin >> c;
	if (b + c < 60) cout << a << " " << b + c << endl;
	else {
		cout << (a + (b + c) / 60) % 24 << " " << (b + c) % 60 << endl;
	}
}