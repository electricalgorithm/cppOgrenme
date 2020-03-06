#include <iostream>
using namespace std;

int main() {
	
	// STRİNG TANITIMLARI
	 
	// POINTER ILE TANIMLAMA
	char const *str = "ev"; // Burada const yazmamızın sebebi, c++11'de artık daimi sabit olmayan
	// ve bu şekilde betimlenmiş stringlerin hatalara yol açtığından yasaklanmış olmasıdır. Yoksa
	// bus error verir.
	cout << str << endl;
	
	// DİZİ OLARAK TANIMLAMA
	char strDizi[2];
	strDizi[0] = 'e';
	strDizi[1] = 'v';
	cout << strDizi << endl;
	
	// STRING NESNESI İLE TANIMLAMA
	string strStr;
	strStr = "alohamora";
	
	cout << strStr << endl;
	cout << strStr.append(" ekleme") << endl;
	cout << strStr.length() << endl;
	
	return 0;
}