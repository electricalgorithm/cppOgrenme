#include <iostream>
#include <fstream> // File stream, dosya kontrolü için gerekli olan kütüphanedir.

using namespace std;

int main() {
	
	// DOSYALARDA YAZMA İŞLEMİ
	ofstream dosyaYazilacak; // Ofstream veri tipinin açılımı "output file stream"dir. Dosyayı yazmak için açtığımızı ifade eder.
	dosyaYazilacak.open("yazilacakDosya.txt"); // Dosyayı açmaya, yoksa da oluşturmaya yarar.
	if (dosyaYazilacak.is_open()) { // .is_open() dosyanın açılıp açılmadığını teyit eder. Kontrol için gereklidir.
		dosyaYazilacak << "veri" << "\n";
		dosyaYazilacak << "hayda bu nereden çıktı" << "\n";
		dosyaYazilacak.close();
	} else cout << "Dosya açılamadı." << endl; // Neden açılamayabilir? Kullanıcı olarak haklarınız yoktur, başka bir program üzerinde çalışıyordur vs.
	
	// DOSYALARDA OKUMA İŞLEMİ
	string getirilenSatir; // GetLine fonksiyonunu okuduğu satırları atacağımız string.
	ifstream dosyaOkunacak ("yazilacakDosya.txt"); // ifstream veri tipinin açılımı "input file stream"dir. Dosyayı okumak için açtığımızı ifade eder.
	if (dosyaOkunacak.is_open()) while (getline(dosyaOkunacak, getirilenSatir)) cout << getirilenSatir << endl; 
	
	return 0;
}
