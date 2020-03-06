#include <iostream>
using namespace std;

int main() {
	int a = 53 & 122;
	cout << a << endl;
	int b = a << 2;
	int c = a >> 2;
	cout << "b: " << b << " c: " << c << endl;
}