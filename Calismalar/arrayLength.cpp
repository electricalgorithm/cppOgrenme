#include <iostream>
using namespace std;

void lengthWriter(int *param) {
	cout << param << endl;
	l
	int len = *(&param + 1) - param;
	cout << len << endl;
}

int main() {
	int arr[] = {10, 5, 6, 4};
	cout << "arr: " << sizeof(arr) << endl;
	cout << &arr << endl;
	cout << *arr << endl;
	lengthWriter(arr);
}