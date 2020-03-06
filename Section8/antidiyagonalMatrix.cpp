#include <iostream>
using namespace std;

/* Bu kod, anti-diyagonal matris yaratır.
 * Eğer diyagonal matris yaratmak isterseniz
 * farkliOlaninKonumunu, matrisin son satırına değil
 * ilk satırına (1'e) eşitleyiniz ve her satır
 * bitişinden sonra farkliOlaninKonumunu azaltmak yerine
 * arttırınız. 
 * 
 * @author: Gökhan Koçmarlı
 * @license: MIT
 * */

int main() {
	cout << "Matris büyüklüğünü giriniz: (x*x) -> x? ";
	int matrisBuyuklugu; 
	cin >> matrisBuyuklugu;
	int farkliOlaninKonumu = matrisBuyuklugu;
	cout << "\n"; // Matrisin üstüne boşluk bırakmak için, görüntü amacıyla.
	for (int matrisSatir = 1; matrisSatir <= matrisBuyuklugu; matrisSatir++){
		cout << "\t"; // Matristen önce boşluk bırakmak için, görüntü amacıyla.
		for (int matrisSutun = 1; matrisSutun <= matrisBuyuklugu; matrisSutun++) {
			cout << " ";
			if (matrisSutun == farkliOlaninKonumu) cout << "X";
			else cout << "O";
		}
		farkliOlaninKonumu--;
		cout << endl;
	}
	cout << "\n"; // Matrisin altına boşluk bırakmak için, görüntü amacıyla.
	return 0;
}