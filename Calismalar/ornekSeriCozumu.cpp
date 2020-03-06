#include <iostream>
using namespace std;

float formule(int n){
	// Formule is = (10^n)/(n!)
	int carpim = 1;
	for (int index = 1; index <= n; index++) carpim *= 10;
	int faktoriyel = 1;
	for (int jindex = n; jindex != 0; jindex--) faktoriyel *= jindex;
	float sonuc = float(carpim) / faktoriyel;
	return sonuc;
}

int main(){
	int value;
	cout << "For k = 1; what's the end of this? n=? ";
	cin >> value;
	
	float sum;
	for (int k = 1; k <= value; k++) sum += formule(k);
	
	cout << "Sonuç: " << sum << endl;
}