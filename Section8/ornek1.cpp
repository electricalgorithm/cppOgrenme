#include <iostream>
using namespace std;

int main(){
	cout << "\t";
	for (int index = 1; index < 10; index++) cout << index << "\t";
	cout << endl <<"____________________________________________________________________________" << endl << "  |"<< endl;
	for (int kiris = 1; kiris < 10; kiris++) {
		cout << kiris << " | \t"; // Sol başlık sütünunu için
		for (int kolon = 1; kolon < 10; kolon++) {
			cout << kolon*kiris << "\t";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}