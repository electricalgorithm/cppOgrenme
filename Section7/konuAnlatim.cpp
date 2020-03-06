#include <iostream>
using namespace std;

int main() {
	// Aynı olayı sağlayan, üç farklı karakterde kod yazacağız.
	// İlk kod parçacığını "while" döngüsü ile kuracağız.
	int index = 0; // Bu adım kurulumuna --initializaton-- denir.
	while (index < 10) { // Bu koşul kurulumuna --condition-- denir.
		cout << "YAZI " << index << endl;
		index++; // Adımı arttıran bu koda ise --iteration-- denir.
	}
	cout << "index çıkış değeri: " << index << endl;
	// İkinci kod parçacağını "for" döngüsü ile kuracağız.
	// For döngüleri initialization, condition ve iteration adımlarını
	// tek kod satırında anlatmamıza yarar.
	// Bundan önce ayrım yapmak için, "----" yazdıralım.
	cout << "----------------" << endl;
	// For döngüsü:
	for (int index = 0; index < 10; index++) {
		cout << "YAZI " << index << endl;
	}
	cout << "index çıkış değeri: " << index << endl;
	// Üçüncü kod parçacağını "do .. while" ile kuracağız.
	cout << "----------------" << endl;
	index = 0; // Daha önce tanımlı olduğu için sadece değer atama yaptık.
	do {
		cout << "YAZI " << index << endl;
		index++;
	} while (index < 10);
	cout << "index çıkış değeri: " << index << endl;
	return 1;
}