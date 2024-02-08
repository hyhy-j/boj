#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	int i;
	cin >> s;
	cin >> i;
	cout << s[i - 1] << "\n";
}