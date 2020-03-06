#include <iostream>
using namespace std;

int maxArray(int lengthArray, int arraySelf[]) {
	int temp = arraySelf[0];
	for (int index = 0; index < lengthArray; index++) {
		if (arraySelf[index] > temp) temp = arraySelf[index];
		else continue;
	}
	return temp;
}

int minArray(int lengthArray, int arraySelf[]) {
	int temp = arraySelf[0];
	for (int index = 0; index < lengthArray; index++) {
		if (arraySelf[index] < temp) temp = arraySelf[index];
		else continue;
		}
		return temp;
	}
	
float ortArray(int lengthArray, int arraySelf[]) {
	float toplam = 0;
	for (int index = 0; index < lengthArray; index++) toplam += arraySelf[index];
	return toplam/lengthArray;
}

int main() {
	int a[6] = {15, 25, 3, 36, 11, 46};
	cout << ortArray(6.0, a);
	return 0;
}
