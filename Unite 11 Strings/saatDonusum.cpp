#include <iostream>
using namespace std;

int main(){
	cout << "Saati giriniz: ";
	string girdi; cin >> girdi;
	
	int saat, dakika, saniye;
	
	saat = (girdi[0] - 48)*10;
	saat += (girdi[1] - 48);
	
	dakika = (girdi[3] - 48)*10;
	dakika += (girdi[4] - 48);
	
	saniye = (girdi[6] - 48)*10;
	saniye += (girdi[7] - 48);
	
	if (girdi[8] == 'P' && girdi[9] == 'M') saat += 12;
	
	cout << "Çıktı: " << saat << ":" << dakika << ":" << saniye << endl;
}