#include <iostream>

using namespace std;
/// Fonksiyon veya metot
  // Class icerisinden tanimlanan fonksiyona verilen addir.
  //iki tip fonksiyon bulunmaktadir, biri geriye deger dondururken digeri dondurmemektedir.
  // Goruldugu uzere, "int main()" icinde "return 0;" komutu vardir, bu geriye deger dondurdugunu gostermektedir.

  // 2 tip fonkisyon vardýr.
  /* 1- adiyla geriye deger donduren "return"
     2- Adiyla geriye deger dondurmeyen "void"
  */

  ///mainden once fonksiyon girdisi yapilabilir
  //main icinde olmayan "toplamHesapla" main icinde cagrilabilir ve toplama islemi yaptirilabilir.
/*
int toplamHesapla (int a, int b){

return a+b;
}


int main()
{
  int a,b;

  a=5;
  b=3;

  cout << toplamHesapla (a,b);


    return 0;
}
*/


/// int, inti karsiladigindan dolayi, cout kismindaki x,y toplamHesapla2'de a,b girdilerine karsilik gelebilir ve calisma devam eder.

/*
int toplamHesapla2 (int a, int b) {

return a+b;
}

int main ()
{
    int x,y;

    x=10;
    y=5;

    cout << toplamHesapla2 (x,y);

}
*/

/// Basit void kullanimi ornegi asagida belirtilmistir

/*
int toplamHesapla2 (int a, int b) {

return a+b;
}


void toplam(int a, int b) {
cout << a+b;
}

int main ()
{
    int x,y;

    x=10;
    y=5;

    cout << toplamHesapla2(x,y);
}
*/

/// Void kullanimini daha iyi anlamak icin asagidaki ornek incelenebilir.
/// Burada bir veri tabanindaki kategoriler bulunmaktadir. Kullanicilar isimlerini girerek secim yapabilirler
/// ama olmayan bilgi girisi yapildiginda buna engel olabilmek icin, ve ust uste ayni kodu yazmamak icin void kullanilir.
/*
int main ()
{
    string ad;
    int secimsayisi;
    cout << "Merhaba Bilgi Veritabanina Hos geldiniz!" << endl;
    cout << "Buradaki her bilgi 2 gunde bir guncellenmektedir." << endl;
    cout << "Guvenlik ve daha iyi hizmet verebilmek icin \nLutfen gecerli bir isim giriniz: ";
    cin >> ad;

    cout << "Iste icerik dolu kategoriler " << ad << " birini sec." << endl;

    cout << "Kategoriler:\n";
    cout << "1. Guncel Haberler\n"
            "2. En cok izlenen videolar\n"
            "3. Vertitabanindaki tum medya icerikleri\n"
            "4. En cok oynanan flash oyunlar\n"
            "5. Tum flash oyunlar\n"
            "6. En iyi restoranlar\n\n";
            cout << " Seciminizi girin: ";
            cin >> secimsayisi;
    if (secimsayisi==1) {
        cout << "Guncel Haberler aciliyor...";
    }
    else if (secimsayisi==2) {
        cout << "En cok izlenen videolara yonlendiriliyorsunuz...";
    }
    else if (secimsayisi==3) {
        cout << "Tum medya iceriklerinin bulundugu sayfaya yonlendiriliyorsunuz...";
    }
    else if (secimsayisi==4) {
        cout << "Iste en cok oynanan flash oyunlar...";
    }
    else if (secimsayisi==5) {
        cout << "Iste veri tabanindaki tum flash oyunlar...";
    }
    else if (secimsayisi==6) {
        cout << "Iste en leziz ve doyurucu yemeklerin bulundugu yerler...";
    }
    else {
        cout << "Sadece belirtilen kategorilerden secim yapilabilir...";
    }
}
*/
    /// Eger yanlis ya da olmayan kategori secimi olursa, yine ayni kodun yazilmasiyla programda sureklilik saglanabilirdi.
    /// Ama Veritabanina yeni bir kategori eklenmesi halinde her bir kategori kodunun teker teker yeniden duznelmesi gerekirdi.
    /// Bunun yerine Void kullanilabilir.

/*
    void kategoriler() {
    cout << "Kategoriler:\n";
    cout << "1. Guncel Haberler\n"
            "2. En cok izlenen videolar\n"
            "3. Vertitabanindaki tum medya icerikleri\n"
            "4. En cok oynanan flash oyunlar\n"
            "5. Tum flash oyunlar\n"
            "6. En iyi restoranlar\n\n";
    }


    int main ()
{
    string ad;
    int secimsayisi;
    cout << "Merhaba Bilgi Veritabanina Hos geldiniz!" << endl;
    cout << "Buradaki her bilgi 2 gunde bir guncellenmektedir." << endl;
    cout << "Guvenlik ve daha iyi hizmet verebilmek icin \nLutfen gecerli bir isim giriniz: ";
    cin >> ad;

    cout << "Iste icerik dolu kategoriler " << ad << " birini sec." << endl;

    kategoriler ();

            cout << " Seciminizi girin: ";
            cin >> secimsayisi;
    if (secimsayisi==1) {
        cout << "Guncel Haberler aciliyor...";
    }
    else if (secimsayisi==2) {
        cout << "En cok izlenen videolara yonlendiriliyorsunuz...";
    }
    else if (secimsayisi==3) {
        cout << "Tum medya iceriklerinin bulundugu sayfaya yonlendiriliyorsunuz...";
    }
    else if (secimsayisi==4) {
        cout << "Iste en cok oynanan flash oyunlar...";
    }
    else if (secimsayisi==5) {
        cout << "Iste veri tabanindaki tum flash oyunlar...";
    }
    else if (secimsayisi==6) {
        cout << "Iste en leziz ve doyurucu yemeklerin bulundugu yerler...";
    }
    else {
        cout << "Sadece belirtilen kategorilerden secim yapilabilir...";

        kategoriler ();
    }
}
*/

 /// Void fonksiyonu istenseydi mainin asagisina yazilabilirdi ama bu sefer voidin girdi adi ne ise, o main uzerine yazilmalidir.
 /// Ayrica inline komutu vardir, bu ise cagirilan fonkisoyunun kodlarini hepsinin butun olarak cagrilmasina ise yarar. daha hizli calisir.

     inline void kategoriler() {
    cout << "Kategoriler:\n";
    cout << "1. Guncel Haberler\n"
            "2. En cok izlenen videolar\n"
            "3. Vertitabanindaki tum medya icerikleri\n"
            "4. En cok oynanan flash oyunlar\n"
            "5. Tum flash oyunlar\n"
            "6. En iyi restoranlar\n\n";
    }

    int main ()
{
    string ad;
    int secimsayisi;
    cout << "Merhaba Bilgi Veritabanina Hos geldiniz!" << endl;
    cout << "Buradaki her bilgi 2 gunde bir guncellenmektedir." << endl;
    cout << "Guvenlik ve daha iyi hizmet verebilmek icin \nLutfen gecerli bir isim giriniz: ";
    cin >> ad;

    cout << "Iste icerik dolu kategoriler " << ad << " birini sec." << endl;

    kategoriler ();

            cout << " Seciminizi girin: ";
            cin >> secimsayisi;
    if (secimsayisi==1) {
        cout << "Guncel Haberler aciliyor...";
    }
    else if (secimsayisi==2) {
        cout << "En cok izlenen videolara yonlendiriliyorsunuz...";
    }
    else if (secimsayisi==3) {
        cout << "Tum medya iceriklerinin bulundugu sayfaya yonlendiriliyorsunuz...";
    }
    else if (secimsayisi==4) {
        cout << "Iste en cok oynanan flash oyunlar...";
    }
    else if (secimsayisi==5) {
        cout << "Iste veri tabanindaki tum flash oyunlar...";
    }
    else if (secimsayisi==6) {
        cout << "Iste en leziz ve doyurucu yemeklerin bulundugu yerler...";
    }
    else {
        cout << "Sadece belirtilen kategorilerden secim yapilabilir...";

        kategoriler ();
    }
}
