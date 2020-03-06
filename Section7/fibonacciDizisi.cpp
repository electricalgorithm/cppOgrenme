#include <iostream>
using namespace std;

// 1,1,2,3,5,8,13,21...

int main() {
	int toplam = 1, onceki = 1, temp = 0, istenenAdet = 0;
	cin >> istenenAdet;
	cout << "1" << ", ";
	while (istenenAdet > 2) {
		cout << toplam << ", ";
		temp = toplam;
		toplam = toplam + onceki;
		onceki = temp;
		istenenAdet--;
	}
}