#include <iostream>
using namespace std;

int main()
{
	int n, count;
	cin >> n;
	count = n / 4;
	for (int i = 0; i < count; ++i) cout << "long ";
	cout << "int" << endl;
}