#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string girdi;
	cout << "Program Türkçe karakterler ile çalışmamaktadır." << endl;
	cout << "Kontrol etmek istediğiniz kelimeyi giriniz: ";
	cin >> girdi;

	string tersKelime = "";
	int girdiUzunluk = girdi.length();
	// cout << girdiUzunluk << endl; // Girdinin uzunluğunu verir. DEBUG:1
	for (int index = 0; index < (girdiUzunluk + 1) ; index++) {
		int tersIndex = girdiUzunluk - index;
		
		// Eğer kullanıcı girdideki bazı harfleri büyük yazdıysa, her şey, küçüğe çevirir.
		// Çevirmesindeki mantık ASCII tablosuna göre değerlerini arttırmaktır.
		if (girdi[tersIndex] < 97 && index != 0) {
			// cout << "eski: " << girdi[tersIndex] << endl; // Eski harfi verir. DEBUG:2a
			girdi[tersIndex] = girdi[tersIndex] + 32;
			// cout << "yeni: " << girdi[tersIndex] << endl; // Yeni harfi verir. DEBUG:2b
		}
		
		// Burada += kullanılmasının sebebi, append() metotunun tek harf için kullanılamıyor oluşudur.
		// ya push_back() metotunu kullancaktım ya da += koyacaktım. Bunu daha kolay buldum.
		tersKelime += girdi[tersIndex];
		
		// DEBUG:3
		// cout << index << "\t" << tersKelime[index] << "\t"<< girdi[index] << "\t" << (int)tersKelime[index] << " | " << (int)girdi[index]; 
		// cout << endl;
	}
	
	// DEBUG'ları aktif edersek görülür ki, girdinin sonundaki \0 değerini tersKelime ilk indexine vermiş.
	// Bu da iki kelimenin karşılaştırılmasını engelliyor. Bu yüzden ikisinden de sildim \0 karakterini. 
	// Bunu yapabilmek için ise stringi parçalayan substr() metotunu kullandım.
	tersKelime = tersKelime.substr(1, girdiUzunluk);
	girdi = girdi.substr(0, girdiUzunluk+1);
	// cout << tersKelime << endl << girdi << endl; // Ters kelimenin ve asıl girdinin son halini ekrana verir. DEBUG:4
	
	// Compare metotu string kütüphanesine özeldir ve sözlüğe göre arama yapar.
	if (tersKelime.compare(girdi) == 0) cout << " > Palindrom kelimeyi buldunuz.";
	else cout << " > Kelime palindrom değildir.";
	cout << endl;
	
	return 0;
}