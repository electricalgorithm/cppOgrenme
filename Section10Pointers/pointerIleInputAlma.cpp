#include <iostream>
using namespace std;

int main() {
	int *p = (int *)malloc(sizeof(int)*5);
	cout << "5 Sayı giriniz. " << endl;
	for (int i = 0; i < 5; i++) cin >> p[i];
	
	for (int i = 0; i < 5; i++) cout << p[i] << endl;
	
	return 0;
}