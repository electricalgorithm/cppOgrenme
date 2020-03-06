#include <iostream>
using namespace std;

int main(){
	char karakterOrnegi = '}';
	cout << "karakterOrnegi: " << karakterOrnegi << " | Büyüklüğü: " << sizeof(karakterOrnegi) << endl;
	
	signed int isaretliTamsayi = 15345;
	cout << "isaretliTamsayi: " << isaretliTamsayi << " | Büyüklüğü: " << sizeof(isaretliTamsayi) << endl;
	
	signed long int isaretliBuyukTamsayi = 55555555555555555555555555555;
	cout << "isaretliBuyukTamsayi: " << isaretliBuyukTamsayi << " | Büyüklüğü: " << sizeof(isaretliBuyukTamsayi) << endl;
	
	signed short int isaretliKucukTamsayi = 5555555555555555555555555555;
	cout << "isaretliKucukTamsayi: " << isaretliKucukTamsayi << " | Büyüklüğü: " << sizeof(isaretliKucukTamsayi) << endl;
	
	unsigned int a;
	cout << "İşareti olmayan tam sayıların büyüklüğü: " << sizeof(a) << endl;
	unsigned long int b;
	cout << "İşareti olmayan büyük tam sayıların büyüklüğü: " << sizeof(b) << endl;
	unsigned short int c;
	cout << "İşareti olmayan küçük tam sayıların büyüklüğü: " << sizeof(c) << endl;
	float d;
	cout << "Kayan noktalı sayıların büyüklüğü (float):" << sizeof(d) << endl;
	double e;
	cout << "Kayan noktalı sayıların büyüklüğü (double):" << sizeof(e) << endl;
	long double f;
	cout << "Kayan noktalı sayıların büyüklüğü (long double):" << sizeof(f) << endl;
	
	return 1;
}