#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int arr[5] = {111,2546,3879,455,52};
	long int carpim = 1;
	for (int index = 0; index < 5; index++) carpim *= arr[index];
	cout << pow(carpim, 0.2);
}