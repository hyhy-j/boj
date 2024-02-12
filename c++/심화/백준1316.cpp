#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int cnt = 0;

	for (int i = 0; i < n; ++i) {
		string word;
		cin >> word;

		vector<char> chrlist;
		chrlist.push_back(word[0]);

		for (int p = 1; p < word.length(); ++p) {
			if (word[p] != word[p - 1]) {
				chrlist.push_back(word[p]);
				if (count(chrlist.begin(), chrlist.end(), word[p]) != 1) {
					cnt += 1;
					break;
				}
			}
		}
	}

	cout << n - cnt << "\n";
}