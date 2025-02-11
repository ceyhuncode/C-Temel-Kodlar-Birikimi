#include <iostream>

/// Her bir kodun anlatimindan sonra kodun calismasi icin, calismasini istemediginiz kodlari yoruma cevirin. "/* */"
/// using namespace std kolaylik saglar fakat fonkisyonlarda pc'nin sasirma ihtimali vardýr

using namespace std;

int main()
{
    /// tırnak içinde yazılan ifaderler chardır texttir, onu ekrana direkt getirebiliriz getirir.
    // endl komutu ile bir satir asagi inilir.


    cout << "merhabalar diyorum" << endl;

    /// int komutu ile tam sayı girilebilir ve bu ifadelerle ekrana yine cout komutu ile gelir.
    // bir değişken kullanılmadan önce mutlaka girisi olusturulmalidir, örnegin int ile gibi.
    // ascii kodlamasindan dolayi a ve A farklilardir, farkli elementleri temsil ederler.

    int a=100 ;

    cout << a << endl;

    int A=102 ;

    cout << A << endl ;

    /// Degisken denemesi (int ile tekrardan girilmez)

    int b=200 ;

    cout << b << endl ;

    b=210 ;

    /// degisken yazma doðruları sadeceleri (gibi)
    // karakterlerin\kelimelerin arasında bosluk bırakarak degisken yazilamaz
    // ctrl+d ile ayni satir bir alta kopyalanabilir
    // camelCase , snake_case , kebap-case tarzinda degiskenler yazilabilir.
    // degiskenler rakam ile baglayamaz örnek: 1dosya, ama böyle yazilabilir; dosya1, do2sya, dos3y3a.
    // "not" kullanilamaz ingilizcede olumsuzluk bildirdigi icin, fonksiyon olarak da bu programa da atanmistir. "Not" olur ama.
    int c=300 ;
    int C=333 ;
    int deneme=400 ;
    int deneMe=500 ;
    int read_me=600 ;
    int _readme=700 ;

    //simdi hepsini konsol ekranina cagiralim

    cout << c << endl ;
    cout << C << endl ;
    cout << deneme << endl ;
    cout << deneMe << endl ;
    cout << read_me << endl ;
    cout << _readme << endl ;

    /// string ile text yazabiliriz
    /// ayrica int leri toplayabiliriz ama string ile toplama yapilamaz, text ile rakam toplanamaz cunku.

    string saat="oniki" ;
    int saat2=12 ;

    cout << saat2+2 << endl ;

    /// stringler birbirleriye toplanabilir ancak bunlar, yan yana yazilma gibi komutları olustururlar.

    string saat3="dort" ;
    string saat4=" bucuk" ;

    cout << saat3+saat4 << endl ;

    /** Daha fazla degisken tipleri
    int TAMSAYİ
    float Kusuratli sayi mesela -> float pi=3.16  * Turkce gibi kusurati göstermek için virgul kullanılmaz. 6 karakter.
    double Yine deger girilir, mesela -> double buyuksayi= 44.99 * 15 karakter.
    char ile de karakter yazilir, mesela -> char karakter='C' *tek karakter, uzunca kelime yazılsa da en son okunan karakter ekrana gelir.
    ---char ile yazılan kodda sayi varsa ascii karsiligi gelir.
    Programlamaya göre bir sey yanlis deiglse dogrudur bool karsilastir=0-1-false-true olur ama 1000 yazsak da dogru diyebilir.
    */
    // Hepsini ekleyip cagiralim

    int tamsayi=800 ;
    float fantastic=4.4 ;
    double NewMe=7000.77 ;
    char onecharacter='@' ;
    bool compare=true ;

    cout << tamsayi << endl;
    cout << fantastic << endl;
    cout << NewMe << endl;
    cout << onecharacter << endl;
    cout << compare << endl;

    ///Ders 2
    // Toplama islemi gibi bircok matematiksel islem farkli yollarla yapilabilir

    int a=5 ;
    int b=7 ;
    int total ;

    total=a+b;

    cout << total;

    /// Program bir deger verilmezse istedigi toplamayi yani islemi yapacaktir. Burada 16 sayisini verecektir.

    int c;
    int d;

    cout << c+d;


    return 0;
}
