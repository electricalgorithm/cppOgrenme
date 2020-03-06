#include <iostream>
using namespace std;

int main() {
	// İşçi problemlerini hesaplamak için geliştirilmiştir.
	int yapanIsci, yapilacakisci, yapanSure, yapilacakSure, secim;
	cout << "############### İŞ:İŞÇİ HESABI ###############" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Yapan işçi sayısı: "; cin >> yapanIsci;
	cout << "Yapılan süre: "; cin >> yapanSure;
	cout << "----------------------------------------------" << endl;
	cout << "Bulmak istediğiniz değeri giriniz. " << endl << "1: İşçi sayısından süre, 2: Süreden işçi sayısı" << endl;
	cin >> secim;
	
	if (secim == 1){
		cout << "----------------------------------------------" << endl;
		cout << "İşçi sayısını giriniz: ";
		cin >> yapilacakisci;
		int sonuc = (yapanIsci * yapanSure) / yapilacakisci;
		cout << "Sonuç: " << sonuc << endl;
	} else if (secim == 2) {
		cout << "----------------------------------------------" << endl;
		cout << "Geçen sürenin sayısını giriniz: ";
		cin >> yapilacakSure;
		int sonuc = (yapanIsci * yapanSure) / yapilacakSure;
		cout << "Sonuç: " << sonuc << endl;
	} else {
		 cout << "Girdiğiniz seçenek değeri yanlıştır." << endl;
	}
	return 0;
}