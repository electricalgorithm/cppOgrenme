#include <iostream>
using namespace std;

int main() {
	int arr[5] = {111,2546,3879,455,52};
	float toplam = 0;
	for (int index = 0; index < 5; index++) toplam += arr[index];
	cout << (toplam/5);
}