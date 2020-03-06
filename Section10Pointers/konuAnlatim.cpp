#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int *p = &a;
	
	cout << "a'nın tutulduğu adres: " << &a << endl; // A değişkenin bellekte saklı olduğu yeri gösterir.
	cout << "a'nın sahip olduğu değer: " << a << endl; // A'nın değişken olarak sakladığı değeri gösterir.
	//cout << "a'nın gösterdiği değer: " << *a << endl; // Bu kod çalışmaz çünkü a içinde bir bellek adresi saklamaz.
	
	cout << "p'nin tutulduğu adres: " << &p << endl; // P değişkeninin bellekte saklı olduğu yeri gösterir.
	cout << "p'nin sahip olduğu değer: " << p << endl; // P'nin değişken olarak sakladığı değeri gösterir.
	cout << "p'nin gösterdiği değer: " << *p << endl; // P'nin değişken olarak sakladığı yerin bellekteki karşılığının değerini gösterir.
	
	// Programın çıktısı:
	// a'nın tutulduğu adres: 0x7fff7f0811cc
	// a'nın sahip olduğu değer: 10
	// p'nin tutulduğu adres: 0x7fff7f0811d0
	// p'nin sahip olduğu değer: 0x7fff7f0811cc
	// p'nin gösterdiği değer: 10

}