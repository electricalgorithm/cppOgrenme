#include <iostream>
using namespace std;

int multip(int param1, int param2) {
	if (param2 == 1) {
		return param1;
	} else {
		return param1 + multip(param1, param2-1);
	}
}

int main() {
	while (true) {
		cout << "Çarpımını bulmak istediğiniz sayıları giriniz." << endl;
		cout << "İlk sayı: "; int ilkSayi; cin >> ilkSayi;
		cout << "İkinci sayı: "; int ikinciSayi; cin >> ikinciSayi;
		cout << "Çarpım sonucu: " << multip(ilkSayi,ikinciSayi) << endl << endl;
	}
}