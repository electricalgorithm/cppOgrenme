#include <iostream>
#include <string>
using namespace std;

int logic(char *param) {
	string sonuc = "";
	bool sonBulus = false;
	
	for (int index = 0; index < karakterSayisi; index++) {
		char afterVal = param[index+1];
		char currentVal = param[index];
		
		if (currentVal != afterVal) {
			sonuc.append(currentVal);
		}
	}
		
}

int main() {
	logic("alohamora");
}