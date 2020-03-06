#include <iostream>
using namespace std;

/* Bu program, kullanıcılardan istenilen aralıkta çift sayıların,
 * tel sayıların ve belirli tam bölenlerin bulunması için tasar-
 * lanmıştır. Programın yazım ve kullanım hakları MIT lisansına
 * dahildir.
 * 
 * @author: Gökhan Koçmarlı
 * @email: gokhankocmarli@outlook.com
 * @license: MIT
 * */
 
int main() {
	// Kullanıcıya programı tanıtma metini:
	cout << " ______________________________________________" << endl;
	cout << "|---------- SAYI SIRALAYACI / BULUCU ----------|" << endl;
	cout << "|----------------------------------------------|" << endl;
	cout << "| Menü                                         |" << endl;
	cout << "| 1 > Çift sayı bulucu                         |" << endl;
	cout << "| 2 > Tek sayı bulucu                          |" << endl;
	cout << "| 3 > Belirli bir sayıya tam bölünenleri bulma |" << endl;
	cout << "| 4 > Çıkış                                    |" << endl;
	cout << "|______________________________________________|" << endl;
	cout << endl;
	
	bool whileCikisKontrolu = false; // Programdan çıkış için gereklidir.
	while (true) {
		if (whileCikisKontrolu) {
			cout << "Görüşmek üzere!" << endl;
			break;
		}
		int menuSecimi;
		cout << "~ Hangi komutu yerine getirmek istersiniz? ";
		cin >> menuSecimi;
		
		int ilkSayi, sonSayi;
		// Menü seçeneklerine göre programın işlevlerinin devamı
		switch (menuSecimi) {
			
			// Çift sayı bulma durumu
			case 1: {
				cout << endl << "------------------------------------------------" << endl;
				cout << endl << "-------------- Çift Sayı Bulucu ----------------" << endl;
				cout << "~ Aramaya başlamak istediğiniz ilk sayı: ";
				cin >> ilkSayi;
				cout << "~ Aramanın biteceği son sayı: ";
				cin >> sonSayi;
				int toplamCiftSayi = 0;
				cout << "Çift sayılar:" << endl;
				for (int index = ilkSayi; index <= sonSayi; index++){
					if (index % 2 == 0) {
						cout << index << endl;
						toplamCiftSayi++;
					} else {
						continue;
					}
				}
				cout << "Taramanın sonuna gelinmiştir. Toplamda " << toplamCiftSayi << " sayı bulunmuştur." << endl << endl;
			} break;
				
			// Tek sayı bulma durumu
			case 2: {
				cout << endl << "------------------------------------------------" << endl;
				cout << endl << "-------------- Tek Sayı Bulucu -----------------" << endl;
				cout << "~ Aramaya başlamak istediğiniz ilk sayı: ";
				cin >> ilkSayi;
				cout << "~ Aramanın biteceği son sayı: ";
				cin >> sonSayi;
				int toplamTekSayi = 0;
				cout << "Tek sayılar:" << endl;
				for (int index = ilkSayi; index <= sonSayi; index++) {
					if (index % 2 != 0) {
						cout << index << endl;
						toplamTekSayi++;
					} else {
						continue;
					}
				}
				cout << "Taramanın sonuna gelinmiştir. Toplamda " << toplamTekSayi << " sayı bulunmuştur." << endl << endl;;
			} break;
					
			//Tam bölen bulucu
			case 3: {
				cout << endl << "------------------------------------------------" << endl;
				cout << endl << "-------------- Tam Bölen Bulucu ----------------" << endl;
				int bolen;
				cout << "~ Aramaya başlamak istediğiniz ilk sayı: ";
				cin >> ilkSayi;
				cout << "~ Aramanın biteceği son sayı: ";
				cin >> sonSayi;
				cout << "~ Bölen sayı: ";
				cin >> bolen;
				int toplamSayiAdeti = 0;
				cout << bolen <<" sayısına tam bölünen sayılar: " << endl;
				for (int index = ilkSayi; index <= sonSayi; index++) {
					if (index % bolen == 0) {
						cout << index << endl;
						toplamSayiAdeti++;
					} else {
						continue;
					}
				}
				cout << "Taramanın sonuna gelinmiştir. Toplamda " << toplamSayiAdeti << " sayı bulunmuştur." << endl << endl;;
			} break;
				
			case 4: {
				cout << "Programdan çıkmayı tercih ettiniz." << endl;
				whileCikisKontrolu = true;
			} break;
				
		} // Switch'inki
	} // While'ninki
	
	return 0;
}