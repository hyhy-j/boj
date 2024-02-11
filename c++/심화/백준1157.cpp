#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string word;
	cin >> word;
	string::iterator start = word.begin(), end = word.end();
	transform(word.begin(), word.end(), word.begin(), ::toupper);

	vector<int> chrcount;
	vector<char> chr;

	while (!word.empty()){
		char now = word[0];
		int nowcount = count(word.begin(), word.end(), now);

		chrcount.push_back(nowcount);
		chr.push_back(now);

		word.erase(remove(word.begin(), word.end(), now), word.end());
	}

	vector<int> ::iterator vecstart = chrcount.begin(), vecend = chrcount.end();

	int maxval = *max_element(vecstart, vecend);
	int index = max_element(vecstart, vecend) - vecstart;
	if (count(vecstart, vecend, maxval) == 1) cout << chr[index] << "\n";
	else cout << "?\n";
}