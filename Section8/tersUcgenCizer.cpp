#include <iostream>
using namespace std;

int main() {
	// Ters üçgen çizdirme programı
	/* Boşluk	Yıldız
	 *  (0) **** (4)
	 *  (1)  *** (3)
	 *  (2)   ** (2)
	 * 	(3)    * (1)
	 * */
	cout << "Düşey kenarı kaç satırlık bir dik üçgen istersiniz? ";
	int istenenBasamak; cin >> istenenBasamak;
	cout << endl; // Görüntü için sorudan sonra bir satır boşluk bırakır.
	for (int basamakSayisi = 0; basamakSayisi < istenenBasamak; basamakSayisi++) {
		cout << "\t\t"; // Baştaki 8 karakterlik boşluğu sağlar, görüntü içindir.
		for (int boslukMiktari = 0; boslukMiktari < basamakSayisi; boslukMiktari++) cout << " "; // Her basamağın yıldız önü boşluklarını sağlar.
		for (int yildizMiktari = istenenBasamak-basamakSayisi; yildizMiktari > 0; yildizMiktari--) cout << "*"; // Her basamağın yıldızlarını sağlar.
		cout << endl; // Görüntü için sonda bir satır boş bırakır.
	 }
	 cout << endl;
	
	return 0;
}