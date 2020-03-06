#include <iostream>
using namespace std;

// Bu program, belli bir dizideki en büyük üç sayıyı sırası ile döndürmeye yarar.
// @author: Gökhan Koçmarlı
// @lisance: MIT

int main() {
	int arr[7] = {122, 12, 32, 11, 23, 34, 65}; // Üzerinde çalışacağımız dizimiz.
	
	// Dizideki en küçük sayıyı bulmak için kullandığımız kod kümesi.
	int minVal = arr[0];
	for (int i = 0; i <= 6; i++) if (arr[i] < minVal) minVal = arr[i];
	
	// En büyük üç sayının değişkenine ilk önce en küçük değerleri veriyoruz.
	int firstMax = minVal;
	int secMax = minVal;
	int thirdMax = minVal;
	// Daha sonra teker teker deneyerek, sıra kaydırma mantığı ile öğreniyoruz.
	for (int i = 0; i <= 6; i++) {
		if (arr[i] > firstMax) {
			thirdMax = secMax;
			secMax = firstMax;
			firstMax = arr[i];
		} else if (arr[i] > secMax) {
			thirdMax = secMax;
			secMax = arr[i];
		} else if (arr[i] > thirdMax) {
			thirdMax = arr[i];
		} else continue;
	}
	
	cout << "1: " << firstMax << endl << "2: " << secMax << endl << "3: " << thirdMax << endl;
	
	return 0;
}