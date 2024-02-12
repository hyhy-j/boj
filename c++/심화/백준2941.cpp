#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string word;
	cin >> word;

	string arr[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	size_t len = word.length();

	for (const string s : arr) {
		int index = word.find(s);
		while (index != string::npos) {
			if (!(s=="z=" && word[index-1]=='d')) len -= s.length() - 1;
			index = word.find(s, index + 1);
		}
	}

	cout << len << "\n";
}