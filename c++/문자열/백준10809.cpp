#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	int index;
	char alpha[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	cin >> s;

	for (char i : alpha) {
		if (i == NULL) break;
		index = s.find(i);
		if (index != string::npos) cout << s.find(i)<<" ";
		else cout << -1<<" ";
	}
}