#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	vector<string> words;
	while (getline(cin, str)) {
		words.push_back(str);
	}
	for (string c : words) cout << c << "\n";
}