#include<iostream>
using namespace std;

void fib(int n) {
	if (n <= 0)
		return;
	int f1 = 0, f2 = 1;
	for (int i = 0; i < n; i++) {
		cout << f1 << endl;
		int next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
}

int main() {
	cout << "Hello, World!" << endl;
	int n;
	cout << "n = ";
	cin >> n;
	if (n < 0)
		return 0;
	fib(n);
	return 0;
}