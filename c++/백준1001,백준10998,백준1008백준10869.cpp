// ����1000, ����1001, ����10998, ����10869
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a, b;
	// double c;
	cin >> a >> b;
	cout << a + b << endl; // ����1000
	cout << a - b << endl; // ����1001
	cout << a * b << endl; // ����10998
	// c = a / b;
	// printf("%.10f\n", c); // ����1008
	cout << a / b << endl;
	cout << a % b << endl; // ����10869
}