#include <iostream>

using namespace std;

int main()
{
    /// Kullanici saat, dakika, saniye degerlerini girsin, yanlis giriste program hata versin, dogru ise saniye 1 artsin ve yeni saat degeri gelsin.

    /*
        int saat, dakika, saniye;

        cout << "Saat, dakika, saniye degerleri giriniz: ";
        cin >> saat >> dakika >> saniye;

        if(saat<0 || saat>23 || dakika<0 || dakika>59 || saniye<0 || saniye>59) {
            cout << "Yanlis zamanlama!";
        }
        else {
            saniye++;
            if(saniye==60)
            {
                saniye=0;
                dakika++; }
                if (dakika==60) {
                    dakika=0;
                    saat++; }
                    if (saat==24) {
                        saat=0;
                    }
            }

    cout << saat << ":" << dakika << ":" << saniye;

    */

/// Kullanici para cekmek icin para miktari girecek ve sadece 5in katlari cekilebilir. Yoksa hata verir.

    /*
        int cpm; /// cpm cekilecek para miktaridir
        cout << "Cekilecek para miktarini girin: ";
        cin >> cpm;
        if (cpm%5!=0) {
            cout << "Para 5'in kati olmalidir";
            }
            else {
                int a200, a100, a50, a20, a10, a5;

                a200=cpm/200;
                cpm=cpm-a200*200;

                a100=cpm/100;
                cpm=cpm-a100*100;

                a50=cpm/50;
                cpm=cpm-a50*50;

                a20=cpm/20;
                cpm=cpm-a20*20;

                a10=cpm/10;
                cpm=cpm-a10*10;


                cout << "200 TL'den " << a200 << " Adet" << endl;
                cout << "100 TL'den " << a100 << " Adet" << endl;
                cout << "50 TL'den " << a50 << " Adet" << endl;
                cout << "20 TL'den " << a20 << " Adet" << endl;
                cout << "10 TL'den " << a10 << " Adet" << endl;
                cout << "200 TL'den " << cpm/5 << " Adet" << endl;
            }
    */



    /// Kullanici tarih bilgisi girecek, gun ay yil dogru mu girildi kontrol edilecek
    /*
        int gun, ay, yil;

        cout << "GUN, AY, YIL bilgileri giriniz: ";
        cin >> gun >> ay >> yil ;

        if (gun<0 || gun>31 || ay<0 || ay>12 || yil<0) {
            cout << "Boyle bir tarih yok.";
        }
        else { }
            if ((ay==2 || ay==4 || ay==6 || ay==9 || ay==11) & gun==31){

             cout << "Bu aylarda 31'nci gun bulunmamaktadir.";
             }
         else {
            if (ay==2 && gun>29) {
                cout << "Subat 28 gundur ve her dort yilda bir 29 gundur.";
            }
        }

    */

/// Switch nedir? Switch direkt istenilen koda yoneltir. Ama switch fazladan veriyi ekrana getirebilir.
//Bu yuzden break komutu vardir. Her bir case icin kullanilabilir.

    /*
        int  a=2;

        switch (a) {

        case 1:
        cout << "bir" << endl;
        break;
        case 2:
        cout << "iki" << endl;
        break;
        case 3:
        cout << "uc" << endl;
        break;
        default:
        cout << "Hatali giris yaptiniz!";
        }

    */

/// Kullanicidan adini istenmekte ve cinsiyeti de istenmekte. Cinsiyet icin E/K karakterleri yeterlidir.

    string isim;
    char cinsiyet;

    cout << "Adiniz?: ";
    cin >> isim;
    cout << "Cinsiyetiniz? (e/k): ";
    cin >> cinsiyet;

    switch (cinsiyet)
    {
    case 'E':
    case 'e':
        cout << "Hosgeldiniz" << isim << " bey"
             break;

    case 'K':
    case 'k':
        cout << "Hosgeldiniz"<< isim << " hanim"
             break;

    default:
        cout << "Yanlis giris";
    }


    return 0;
}
