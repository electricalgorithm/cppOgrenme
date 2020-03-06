#include <iostream>
using namespace std;

int main(){
	int matris[3][3] = {
		{5,4,3}, 
		{4,0,4},
		{7,10,3}
		};
	
	//Array kopyalama işlemi
	int temp[3][3];
	for (int kiris = 0; kiris < 3; kiris++) {
		for (int kolon = 0; kolon < 3; kolon++) {
			temp[kiris][kolon] = matris[kiris][kolon];
		}
	}
	
	// Arrayleri transpoze etme süreci
	for (int matrisKiris = 0; matrisKiris < 3; matrisKiris++) {
		for (int matrisKolon = 0; matrisKolon < 3; matrisKolon++) {
			matris[matrisKiris][matrisKolon] = temp[matrisKolon][matrisKiris];
		}
	}
	
	// Orjinal arrayi yazdırma süreci
	cout << "Orj: ";
	for (int index = 0; index < 3; index++) {
		cout << "{";
		for (int jindex = 0; jindex < 3; jindex++) {
			cout << temp[index][jindex] << " ";
		}
		cout << "} ";
	}
	
	
	// Transpoze arrayi yazdırma süreci
	cout << endl <<"Trans: ";
	for (int index = 0; index < 3; index++) {
		cout << "{";
		for (int jindex = 0; jindex < 3; jindex++) {
			cout << matris[index][jindex] << " ";
		}
		cout << "} ";
	}
}