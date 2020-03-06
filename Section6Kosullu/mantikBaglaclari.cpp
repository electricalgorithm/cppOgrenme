#include <iostream>
using namespace std;

int main() {
	// Kullanıcıdan girdi alma işlemi:
	int ilkSayi, ikinciSayi, ucuncuSayi;
	cout << "İlk değeri giriniz: "; cin >> ilkSayi;
	cout << "İkinci değeri giriniz: "; cin >> ikinciSayi;
	cout << "Üçüncü değeri giriniz: "; cin >> ucuncuSayi;
	
	// ilkSayı, girilen ikinci ve üçüncü sayının arasında mı?
	if (ilkSayi < ikinciSayi && ilkSayi > ucuncuSayi) {
		cout << " > İlk girdiğiniz sayı, diğer girilen sayıların arasında yer almaktadır." << endl;
	} else if (ilkSayi > ikinciSayi && ilkSayi < ucuncuSayi) {
		cout << " > İlk girdiğiniz sayı, diğer girilen sayıların arasında yer almaktadır." << endl;
	} else {
		cout << " > İlk girdiğiniz sayı, diğer girilen sayıların arasında yer almamaktadır." << endl;
	}
	
	// ilkSayı, herhangi diğer sayıdan büyük müdür?
	bool ilkSayiIkinciBuyuk = ilkSayi > ikinciSayi;
	bool ilkSayiUcuncuBuyuk = ilkSayi > ucuncuSayi;
	
	if (ilkSayiIkinciBuyuk || ilkSayiUcuncuBuyuk) {
		cout << " > İlk girdiğiniz sayı, diğer girilen sayılardan herhangi birinden daha büyüktür." << endl;
	} else {
		cout << " > İlk girdiğiniz sayı, diğer girilen sayılardan herhangi birinden daha büyük değildir." << endl;
	}
	
	// ilkSayi, diğer sayılara göre durumu nedir?
	if (ilkSayiIkinciBuyuk && ilkSayiUcuncuBuyuk) {
		cout << " > İlk girilen sayı, diğer tüm sayılardan büyüktür." << endl;
	} else if (ilkSayiIkinciBuyuk && !ilkSayiUcuncuBuyuk) {
		cout << " > İlk girilen sayı ikinci sayıdan büyük, üçüncü sayıdan küçük ya da eşittir." << endl; 
	} else if (!ilkSayiIkinciBuyuk && ilkSayiUcuncuBuyuk) {
		cout << " > İlk girilen sayı, ikinci sayıdan küçük ya da eşit, üçüncü sayıdan büyüktür." << endl;
	} else {
		cout << " > İlk girilen sayı, diğer tüm sayılardan küçük ya da eşittir." << endl;
	}
	
	if (ilkSayi != ikinciSayi && ikinciSayi != ucuncuSayi && ilkSayi != ucuncuSayi) {
		cout << " > Üç sayı da birbirlerine eşit değildir." << endl;
	} else if (ilkSayi == ikinciSayi && ikinciSayi == ucuncuSayi && ilkSayi == ucuncuSayi) {
		cout << " > Tüm sayılar birbirine eşittir." << endl;
	}
	
	return 0;
}