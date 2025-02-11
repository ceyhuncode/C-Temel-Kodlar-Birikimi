#include <iostream>

using namespace std;

int main()
{
    /*
    if (kosul/sart) {
        dogru
    }
    else {
        yanlis hayir
    }
 */

 /// If ile girilen sayinin pozitif mi negatif mi oldugunu soyleyen program yapma - if icine sart yazilir else icine yazilmaz
/*
 int a;
 cout << "a sayisini girin: ";
 cin >> a;

 if (a>=0) {
    cout << "girilen sayi pozitiftir [+]";
 }
 else {
    cout << "girilen sayi negatiftir [-]";
 }
*/

/// if icinde if yazma örnegi ve sifir degerini belirtme

 /*
int a;
cout << "a sayisini girin: ";
cin >> a;

if (a<0) {
    cout << "negatif deger";
}
else {
    if (a==0) {
        cout << "sifir degeri girdiniz";
    }
    else {
        cout << "pozitif deger";
    }
 */

 /// C'den gelme bir if yazimi olan bu satirda, sartli yazim vardir. Daha kisadir ama cok tercih edilmez.
 /// printf de c kod dilinde cout ile aynidir
 /*
 cout << ((5>0) ? "Pozitif":"Negatif") << endl;
    printf ("c kod dili");
 */

/// Girilen sayinin tek mi cift mi oldugunu soyleme.
/*
    int sayi;
    cout << "lutfen bir sayi girin: ";
    cin >> sayi;

    if (sayi%2==0)
    {
        cout << "Cifttir";
    }
else
{
    cout << "Tektir";
}
*/

/// Kullanicinin bir sayi girmesi ve bu sayinin 3 basamakli olup olmadigi soylensin.

int sayi;
cout << "Uc basamakli sayi giriniz: ";
cin >> sayi;

    if (sayi<100 || sayi>999) {
        cout << "Girdiginiz deger uc basamakli degildir!";
    }
    else {
        cout << "Girdiginiz deger uc basamaklidir.";
    }

    return 0;
}
