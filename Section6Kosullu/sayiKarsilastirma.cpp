#include <iostream>
using namespace std;

int main() {
	// Bu kod parçası, iki sayıyı karşılaştırmaya yarar.
	int ilkSayi, ikinciSayi; 
	cout << "İlk sayıyı giriniz: "; cin >> ilkSayi;
	cout << "İkinci sayıyı giriniz: "; cin >> ikinciSayi;
	
	if (ilkSayi != ikinciSayi) {
		cout << "Girilen sayılar birbirlerine eşit değildir, farklıdırlar." << endl;
		if (ilkSayi < ikinciSayi) {
			cout << "İlk girilen sayı, " << ilkSayi << ", ikinci girilen sayıdan, " << ikinciSayi << ", daha küçüktür." << endl;
		} else {
			cout << "İlk girilen sayı, " << ilkSayi << " ikinci girilen sayıdan " << ikinciSayi << " daha büyüktür." << endl;
		}
	} else {
		cout << "Girilen sayılar birbirlerine eşittirler, farklı değildirler." << endl;
	}
}