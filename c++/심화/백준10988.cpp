#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string word;
	cin >> word;
	string word1 = word;
	reverse(word.begin(), word.end());

	if (word == word1) cout << 1 << "\n";
	else cout << 0 << "\n";
}