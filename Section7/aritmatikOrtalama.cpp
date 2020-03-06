#include <iostream>
using namespace std;

int main() {
	cout << "Programa veri girdiğiniz sürece, program verileri kabul edecek ve" << endl;
	cout << "ortalamalarını size gösterecektir." << endl;
	cout << "Verileri girdikten sonra Enter tuşuna basmalısınız." << endl;
	cout << "Ortalamayı sıfırlamak için 0, veri girişini durdurmak için -1 yazınız." << endl << endl;
	
	int girdi, toplam = 0, index = 0;
	while (true) {
		cout << "> Veri girişi: ";
		cin >> girdi;
		if (girdi != 0 && girdi != -1) {
			toplam += girdi;
			index++;
			cout << "Şu anki ortalama: " << (float)toplam/index << endl << endl;
		} else if (girdi == 0) {
			toplam = 0;
			index = 0;
			cout << "> Ortalama sıfırlanmıştır." << endl << endl;
		} else if (girdi == -1) {
			cout << "İstatistik veriler: " << endl;
			cout << "Girdiğiniz sayıların ortalaması -- " << (float)toplam/index << endl;
			cout << "Girdiğiniz sayı adeti -- " << index << endl << endl;
			break;
		}
		
	}
	
	return 0;
}