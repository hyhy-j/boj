#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	// cin.tie(NULL);
	// ios_base::sync_with_stdio(false);

	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> a >> b;
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}
}