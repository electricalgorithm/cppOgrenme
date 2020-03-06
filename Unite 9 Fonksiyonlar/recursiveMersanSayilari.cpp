#include <iostream>
using namespace std;

int pow(int base, int power) {
	int outputVal = 1;
	for (int index = 1; index <= power; index++) {
		outputVal *= base;
	}
	return outputVal;
}

int mersanneOut(int param) {
	return pow(2, param) - 1;
}

int mersanneSeries(int period) { 
	for (int index = 1; index <= period; index++) cout << index << " için çıktı: " << mersanneOut(index) << endl; 
	}

int main() {
	cout << "Mersanne sayı dizisinin uzunluğunu yazınız: ";
	int desiredLong; cin >> desiredLong;
	mersanneSeries(desiredLong);
}