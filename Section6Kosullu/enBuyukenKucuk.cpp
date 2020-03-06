#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	
	if (a >= b && a >= c) { // En büyük A ise
		cout << "En büyük sayı: " << a << endl;
		if (b >= c) {
			cout << "En küçük sayı: " << c << endl;
		} else {
			cout << "En küçük sayı: " << b << endl;
		}
	} else if (b >= c && b >= a) { // En büyük B ise
		cout << "En büyük sayı: " << b << endl;
		if (c >= a) {
			cout << "En küçük sayı: " << a << endl;
		} else {
			cout << "En küçük sayı: " << c << endl;
		}
	} else {
		cout << "En büyük sayı: " << c << endl;
		if (b >= a) {
			cout << "En küçük sayı: " << a << endl;
		} else {
			cout << "En küçük sayı: " << b << endl;
		}
		}
	
	return 0;
}