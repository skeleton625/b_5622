#include <iostream>
using namespace std;

char i1[16];
int n, m;
int main() {
	cin >> i1;
	for (int i = 0; i1[i]; i++) {
		n = i1[i] - 'A';
		if (n > 14 && n < 19) n = 7;
		else if (n > 18 && n < 22) n = 8;
		else if (n > 21 && n < 26) n = 9;
		else n = n / 3 + 2;
		m += n+1;
	}
	cout << m;
	return 0;
}