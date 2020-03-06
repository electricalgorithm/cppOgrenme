#include <iostream>
#include <cmath>
using namespace std;

bool armstrongKontrolu(int param) {
	bool cevap = false;
	
	int temp = param, toplam = 0;
	while (temp != 0) {
		toplam += pow((temp % 10), 3);
		temp = temp - (temp % 10);
		temp /= 10;
	}
	
	if (toplam == param) cevap = true;
	return cevap;

}

int main(){
	int girdi;
	cout << "Kontrol edilecek sayıyı giriniz: ";
	cin >> girdi;
	
	if (armstrongKontrolu(girdi) == true) cout << "Armstrong sayı buldunuz." << endl;
	else cout << "Bulduğunuz sayı, armstrong sayı değildir." << endl;
}