#include <iostream>
using namespace std;

// Fonksiyon void olarak tanımlandı, yani return ile değer döndüremez.
// Void tanımlanmasının sebebi, döndüreceğimiz değerleri pointerlar
// aracılığı ile sağlayacak olmamızdır.
void maxMinCalc(int * paramArr, int paramArrSize, int * paramMax, int * paramMin) {

	*paramMin = paramArr[0]; // paramMin yani main'deki minVal, girdi olarak verdiğimiz dizinin ilk karakterine sahip olsun.
	*paramMax = paramArr[0]; // paramMax yani main'deki maxVal, girdi olarak verdiğimiz dizinin ilk karakterine sahip olsun.
	for (int index = 0; index < paramArrSize; index++) {
		if (*paramMin > paramArr[index]) *paramMin = paramArr[index]; // Klasik deneme taktiği, her birini önceki ile kıyas-
		if (*paramMax < paramArr[index]) *paramMax = paramArr[index]; // lıyoruz. Bu şekilde hem maksı, hem mini bulup pointer-
		// ları aracılığı ile main fonksiyonundaki asıl değişkenlerine gönderiyoruz.
	} 
	
}

int main() {
	// Dizinin karakter sayısını öğrenme
	cout << "Dizinin kaç terimli olacağınız giriniz: ";
	int sizeExp;
	cin >> sizeExp;
	
	// Dizinin elemanlarını diziye atma
	cout << "Dizinin sahip olacağı elemanları giriniz: " << endl;
	int *arr = (int *)malloc(sizeof(int)*sizeExp); // Bu şekilde dizi tanımı yapmamızın nedeni, bellekte dinamik yer ayırmaktır.
	for (int index = 0; index < sizeExp; index++) cin >> arr[index];
	
	
	int maxVal, minVal; // Önceklikle iki değişken tanımladık.
	// Max pointerı maxVal'ın bellekte saklı olduğu yeri işaret etsin.
	// Min pointerı minVal'ın bellekte saklı olduğu yeri işaret etsin.
	int *max = &maxVal, *min = &minVal; // Daha sonra tanımladığımız bu iki değişkene erişmek için iki pointer belirttik.
	maxMinCalc(arr, sizeExp, max, min); // Bu pointerları fonksiyonumuzun içine gönderdik.
	// Fonksiyonumuz void fonksiyon olduğu için return olarak değer veremez. Bu yüzden fonksiyon çalıştırıldığında
	// bizim otomatik olarak pointerları kullanarak maindeki değişkenlere erişmemiz ve onları değiştirmemiz gerekiyordu.
	// Biz de aynen öyle yaptık. Fonksiyonun int olarak tanımlanmamasının sebebi, return edeceği iki değerin bulunması.
	// Hem en küçük sayıyı hem de en büyük sayıyı geri dönmesini istedik.
	
	cout << "Max: " << maxVal << endl << "Min: " << minVal << endl;
	
	return 0;
}