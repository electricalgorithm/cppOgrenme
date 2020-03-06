#include <iostream>
#include <string>
using namespace std;

void findCommon(string param1, string param2) {
	int arr[100];
	int arrPoi = 0;
	for (int index = 0; index < (int)(param1.length()); index++) {
		for (int jndex = 0; jndex < (int)(param2.length()); jndex++) {
			if (param1[index] == param2[jndex]) {
				bool checkVal = false;
				for (int arrCheckPoi = 0; arrCheckPoi < arrPoi; arrCheckPoi++){
					if (arr[arrCheckPoi] == param2[jndex]) checkVal = true;
				}
				if (checkVal == false) {
					arr[arrPoi] = param2[jndex];
					arrPoi++;
				}
			}
		}
	}
	
	for (int index = 0; index < arrPoi; index++){
		cout << char(arr[index]) << endl;
	}
}

int main(){
	
	findCommon("amore", "alohamora");
	
	return 1;
}
