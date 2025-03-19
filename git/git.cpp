#include<iostream>
using namespace std;

int fib(int n) {
	if (n == 1 || n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int main() {
	cout << "Hello, World!" << endl;
	int n;
	cout << "n = ";
	cin >> n;
	if (n < 0)
		return 0;
	int res = fib(n);
	cout << "fib(" << n << ") = " << res << endl;
	return 0;
}