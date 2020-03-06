#include <iostream>
using namespace std;

int main(){
	while (true) {
		cout << "Kaç sayı gireceksiniz? (En düşük 4) ";
		int arrLength; cin >> arrLength;
		if (arrLength < 4) {
			cout << "Tekrar deneyiniz. " << endl << endl;
			continue;
		}
		
		int arr[arrLength];
		
		cout << "Gireceğiniz sayıları boşluk ile ayırarak giriniz: ";
		for (int index = 0; index < arrLength; index++) cin >> arr[index];
		
		int minVal = arr[0];
		for (int index = 0; index < arrLength; index++) if (arr[index] < minVal) minVal = arr[index];
		
		int maxVal = minVal, secMax = minVal, thirdMax = minVal, fourthMax = minVal;
		for (int index = 0; index < arrLength; index++) {
			if (arr[index] > maxVal) {
				fourthMax = thirdMax;
				thirdMax = secMax;
				secMax = maxVal;
				maxVal = arr[index];
			} else if (arr[index] > secMax) {
				fourthMax = thirdMax;
				thirdMax = secMax;
				secMax = arr[index];
			} else if (arr[index] > thirdMax) {
				fourthMax = thirdMax;
				thirdMax = arr[index];
			} else if (arr[index] > fourthMax) {
				fourthMax = arr[index];
			} else continue;
		}
		
		int maxToplam = maxVal + secMax + thirdMax + fourthMax;
		cout << "Oluşabilecek maksimum toplam: " << maxToplam << endl;
		
		minVal = maxVal;
		int secMin = maxVal, thirdMin = maxVal, fourthMin = maxVal;
		for (int index = 0; index < arrLength; index++) {
			if (arr[index] < minVal) {
				fourthMin = thirdMin;
				thirdMin = secMin;
				secMin = minVal;
				minVal = arr[index];
			} else if (arr[index] < secMin) {
				fourthMin = thirdMin;
				thirdMin = secMin;
				secMin = arr[index];
			} else if (arr[index] < thirdMin) {
				fourthMin = thirdMin;
				thirdMin = arr[index];
			} else if (arr[index] < fourthMin) {
				fourthMin = arr[index];
			} else continue;
		}
		
		int minToplam = minVal + secMin + thirdMin + fourthMin;
		cout << "Oluşabilecek minumum toplam: " << minToplam << endl << endl;
		
	} // While'nin
}