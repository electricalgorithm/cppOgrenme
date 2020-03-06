#include <iostream>
#include <cmath>
using namespace std;


int asalKontrol(int param) {
	int sonuc = 1;
	switch (param) {
		case 0: return 0;
		case 1: return 0;
		case 2: return 1;
		case 3: return 1;
		default: {
			for (int index = 2; index <= sqrt(param); index++) {
				if (param % index == 0) {
					sonuc = 0;
					break;
				}
			}
			break;
		}
	}
	return sonuc;
}

int main() {
	int sonDeneme;
	while (true) {
		cout << "Kaça kadar asallık testi yapmak istersiniz? ";
		cin >> sonDeneme;
		if (sonDeneme < 0) {
			cout << "Girdiğiniz sayı hatalı bir değere sahiptir." << endl;
			break;
		} else {
			for (int index = 2; index <= sonDeneme; index++) {
				if (asalKontrol(index) == 1) {
					cout << index << endl;
				}
			}
		}
	}
}