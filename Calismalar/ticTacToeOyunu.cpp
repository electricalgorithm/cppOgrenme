#include <iostream>
using namespace std;
char table[9];

// Bu fonksiyon tahtayı çizmek içindir.
void draw() {
	cout << "____________" << endl;
	cout << "   |   |    " << endl;
	cout << " " << char(table[0]) << " | " << char(table[1]) << " | "<< char(table[2]) << "  " << endl;
}

// Bu fonksiyon tahtada değişiklik yapmak için
// yaratılmıştır. İlk parametre hangi yerin değişeceği,
// ikincisi ise hangi karakter için değişeceğini belirtir.
// İlk oyuncu X'tir ve adı plX olarak tanımlanmıştır.
// İkinci oyuncu O'dur ve adı plO olarak tanımlanmıştır.
void gameMove(int selc, int player) {
	
}

// Bu fonksiyon tahtayı ilk haline getirmek için
// yaratılmıştır. Eğer skorun silinmesini istiyor
// iseniz içine delScore için true atamalısınız.
// ____________
//    |   |    
//  1 | 2 | 3  
// ___|___|____
//    |   |    
//  4 | 5 | 6  
// ___|___|____
//    |   |
//  7 | 8 | 9
// ___|___|____
// 
void start(bool delScore) {
	table[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
}

// Programın çalışması için gerekli olan fonksiyondur.
int main() {
	start(false);draw();
	
	return 0;
}