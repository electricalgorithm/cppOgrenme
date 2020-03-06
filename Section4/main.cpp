#include <iostream>
using namespace std;

int main(){
	int x, z; // Değişken yaratımı
	x = 25; // Değişkene değer atama
	int y = 36; // Değişken yaratımı ve değer atama işlemi
	
	cout << "Sırası ile değişkenler:" << endl <<
	"Z = " << z << endl << // Z değişkenine değer atanmadığı için bellekteki yerinde ne kaldıysa onu gösterecektir.
	"X = " << x << endl <<
	"Y = " << y << endl;
}