// @author: Gökhan Koçmarlı
// 1316190006 Date: 22.12.2019
// Devolopment Env.: CodeLite, Atom IDE and G++
// Devolopment O.S.: Ubuntu 19.10, linux-5.3.0-24-generic
// Algoritma MIT lisansınca özgür bir şekilde kullanılabilir.
// 
// Program istenenden farklı olarak, çıktıları ters ve 
// sırası farklı şekilde veriyor. Ters çıkması,
// yiginGoster fonksiyonunda düzeltilebilir. Ancak sıraların
// farklı verilmesi algoritmiktir.
// 
// Not: ASCII tablosunda A karakteri 65 (int) eşittir. -65 yazan
// her yer buna göndermedir.
// Program İstanbul Üniversitesi - Cerrahpaşa'daki Introd. to Prog.
// and Comp. dersi final ödevi için hazırlanmıştır.

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

void yiginGoster(stack <char> s) { 
    while (!s.empty()) { 
        cout << s.top(); 
        s.pop();
    } 
    cout << endl;
}

stack <char> yigin;
void recursive(int arr[30][30], int dugumSayisi, int ilkBoyutGirisi, bool checkRecur){
	
	// Eğer recursive çağrılma yapılmadıysa kod buraya düşecektir.
	if (checkRecur == false) {
		char root = (char)(ilkBoyutGirisi+65); 
		yigin.push(root);
		int ilkBoyut = ilkBoyutGirisi;
		if (arr[ilkBoyut][0] != 0) {
			yiginGoster(yigin);
			
			// Matrisin ikinci boyutu ile uğraşır. Her girdinin içine bakar, yazar 
			// ve daha sonra matriste birinci boyutta onu kontrol eder. Bulursa
			// matriste birinci boyuta recursive olarak girer.
			int ikinciBoyutN = 0;
			while (arr[ilkBoyut][ikinciBoyutN] != 0 && ikinciBoyutN < dugumSayisi) {
					yigin.push((char)arr[ilkBoyut][ikinciBoyutN]);
					yiginGoster(yigin);
					if (arr[arr[ilkBoyut][ikinciBoyutN]-65][0] != 0) recursive(arr, dugumSayisi - 1, arr[ilkBoyut][ikinciBoyutN]-65, true);
					ikinciBoyutN++;
					yigin.pop();
			}
		}
	}
	
	// Eğer recursive çağrılma yapıldıysa kod buraya düşecektir.
	else {
		int ikinciBoyutR = 0;
		while (arr[ilkBoyutGirisi][ikinciBoyutR] != 0 && ikinciBoyutR < dugumSayisi) {
				yigin.push((char)arr[ilkBoyutGirisi][ikinciBoyutR]);
				yiginGoster(yigin);
				if (arr[arr[ilkBoyutGirisi][ikinciBoyutR]-65][0] != 0) recursive(arr, dugumSayisi - 1, arr[ilkBoyutGirisi][ikinciBoyutR]-65, true);
				ikinciBoyutR++;
				yigin.pop();
		} 
	}
}


int main(int argc, char *argv[]){
	if (argc < 2) {
		cout << "Sorun çıktı, argümanı yerleştirmemişsiniz!" << endl;
		return 0;
	}
	string girdi = argv[1];
	int dugumSayisi = girdi[0] - 48;
	
	// Girdiyi bloklara ayırırken sorun çıkmaması için
	// ilk ögesini ilk önce kaydeder sonra sileriz.
	girdi = girdi.substr(1, girdi.length());
		
	// Verilen girdiyi parçalara ayırıp bloklar adlı
	// vektörümüzün içine koyar.
	vector <string> bloklar;
	string ayrac = "1";
	size_t konum = 0;
	string yakalanan;
	while ((konum = girdi.find(ayrac)) != std::string::npos) {
		// cout << "Eski girdi: " << girdi << endl; // KONTROL
		yakalanan = girdi.substr(0, konum);
		// cout << "Blok: " << yakalanan << endl; // KONTROL
		bloklar.push_back(yakalanan);
		girdi.erase(0, konum + ayrac.length());
		// cout << "Yeni girdi: " << girdi << endl; // KONTROL
		// cout << "---" << endl;
	}
	bloklar.push_back(girdi);
	
    /* Bu kısım blokları yazdırmak ve onlara erişim içindir.
	std::vector<std::string>::iterator index;
    for (i = bloklar.begin() ; i < bloklar.end() ; ++i){
       cout << *i << endl;
    }*/
	
	// Daha sonra bu bloklardan etrafa girişler ve çıkış vereceğiz.
	// İlk index her zaman harf değeridir. (index + 65)'in char hali harf verir.
	// Matriste boş kalan yerlere varsayılan olarak sıfır kalmasını sağlarız.
	// Matrisi 30*30 yapıyorum çünkü 29 harf bulunuyor alfabede.
	int girdiCiktiMatriksi[30][30];
	for (int i = 0; i < 30; i++) for (int j = 0; j < 30; j++) girdiCiktiMatriksi[i][j] = 0;
	
	int bloklarUzunluk = bloklar.size();
	for (int bloktaindex = 0; bloktaindex < bloklarUzunluk; bloktaindex++){
		int girdiDegeri = bloklar[bloktaindex][0] - 65;
		// cout << "girdiDegeri: " << girdiDegeri << endl; // KONTROL
		for (int stringteindex = 1; stringteindex < bloklar[bloktaindex].length(); stringteindex++){
			girdiCiktiMatriksi[girdiDegeri][stringteindex - 1] = (int)bloklar[bloktaindex][stringteindex];
		}
	}
	
	
	
	// Matrisi görüntülemek için bu kısımı kullanabilirsiniz.
	/*int satirSayisi =  sizeof(girdiCiktiMatriksi) / sizeof(girdiCiktiMatriksi[0]);
	for (int yazdirindex = 0; yazdirindex < satirSayisi; yazdirindex++) {
		cout << "Yazdir index: " << yazdirindex << "   " << "Satır: ";
		int sutunSayisi = sizeof(girdiCiktiMatriksi[yazdirindex]) / sizeof(int);
		for (int yazdirindex2 = 0; yazdirindex2 < sutunSayisi; yazdirindex2++) {
			cout << "  " << girdiCiktiMatriksi[yazdirindex][yazdirindex2];
		}
		cout << endl << endl;
	}*/
	
	recursive(girdiCiktiMatriksi, dugumSayisi, 0, false);
	
}
