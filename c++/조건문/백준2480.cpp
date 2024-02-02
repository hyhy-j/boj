#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a == b) && (b == c)) cout << 10000 + a * 1000 << endl;
	else if ((a == b) || (b == c) || (c == a)) {
		int same;
		if (a == b) same = a;
		else same = c;
		cout << 1000 + same * 100 << endl;
	}
	else cout << max({ a,b,c }) * 100 << endl;
}