#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	string word = "";
	vector<string> words;
	int count = 0;
	getline(cin, str);

	for (char i : str) {
		if (i!=' ') word += i;
		else if (word!="") {
			words.push_back(word);
			word = "";
		}
	}

	if (word != "") words.push_back(word);
	
	for (string i : words)  count += 1;
	cout << count << "\n";
}