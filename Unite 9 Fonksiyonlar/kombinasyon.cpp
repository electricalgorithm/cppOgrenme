#include <iostream>
using namespace std;

int fakt (int param) {
	int carpimSonucu = 1;
	for (int index = 1; index <= param; index++) carpimSonucu *= index;
	return carpimSonucu;
}

int komb (int param1, int param2) {
	return fakt(param1) / (fakt(param2) * fakt(param1-param2));
}

int main(){
	cout << "Kombinasyonunu bulmak istediğiniz ikiliyi girmeniz gerekmektedir." << endl;
	cout << "İlk (n): ";
	int n; cin >> n;
	cout << "İkinci (r): ";
	int r; cin >> r;
	cout << "Kombinasyonun sonucu: " << komb(n,r) << endl;
}