#include <iostream>

using namespace std;

int main()
{
    /// Burada calistirmalik bilgiler bulunmaktadir.
    /// Öncelikle ard arda sayi girip bunlari toplayan bir deneme yapilabilir.

    /*
    int sayi1, sayi2;
    int toplam=0;

    cout << "bir sayi giriniz: ";
    cin >> sayi1;
    cout << "bir sayi giriniz: ";
    cin >> sayi2;

    toplam=sayi1+sayi2;
    cout << toplam;
    */

    /// Program sagdan sola okuma yaptigi icin farkli sekillerde islem yaptirilabilir.

    /*
    int  a=3 ;
    int b=7 ;

    a=a+b;

    cout << a << endl ;

    //ya da

    int c=5;
    int d=5;

    c*=d;

    cout << c << endl ;

    // ya da

    int e=9;

    ++e;

    cout << e;
    */

    /// kullanicidan uc basamakli sayi isteniyor ve bunun ters cevrilip +1 eklenmesi gerek.
    /// bu ilk islemde karakterler tek tek sonuca yazilmistir.
    /// gercekten bir deger girilmesi icin -> cout << bb*100+ob*10+yb+1;
    /*
    int sayi;
    cout << "3 basamakli bir sayi girin " ;
    cin >> sayi;

    int bb,ob,yb;
    bb=sayi%10;
    ob=(sayi/10)%10;
    yb=sayi/100;

    cout << bb << ob << yb+1;
    */

    ///Basit hesap makinesi
/*
    float a,b;
    cout << "Lutfen islem yapilacak degerleri giriniz:  " ;
    cin >> a >> b;

    int toplama, cikarma, carpma ;
    float bolme;

    toplama=a+b;
    cikarma=a-b;
    carpma=a*b;
    bolme=a/b;

    cout << "Toplam sonucu= " << toplama << endl;
    cout << "Cikarma sonucu= " << cikarma << endl;
    cout << "Carpma sonucu= " << carpma << endl;
    cout << "Bolum sonucu=" << bolme << endl;




    */

    /// C++'da kodlar icinde sorular vardir, islemler sorular ilerleme gosterir.
    /*
        a<b a degeri b degerinden kucuk mu
        a>b a degeri b degerinden buyuk mu
        a<=b a degeri b degerinden kucuk mu veya esit mi
        a>=b a degeri b degerinden buyuk mu veya esit mi
        a==b a degeri b degerine esit mi
        a!=b a degeri b degerine esit degil mi
        !(a==b) degeri b degerine esit degil mi

        a && b  a ve b          & ampersand
        a || b  a veya b        | pipe veya pipeline
     */




    return 0;
}
