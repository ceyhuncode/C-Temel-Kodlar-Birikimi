#include <iostream>
#include <time.h>

using namespace std;

int main()
{

    ///Rastgele gibi olan sayinin ekrana cikarilmasi icin, time random, t=rand kullanilabilir. (aslinda rastgele degil)
 /*
    int t=rand() ;
    cout << t << endl;

    int y=rand();
    cout << y;
 */
    ///gercekden rastgelelestirme icin, kutuphaneye yeni ekleme yapilabilir. Bunun icin, time.h gereklidir. cpp dosyasinin basinda bulunabilir.
    // onceki degerlerin rastgelelestirilmis hali ise

    int t=rand() ;
    cout << t << endl;

    srand (time (NULL));

    int y=rand();
    cout << y;



    /// Dizi yaziminda indexler/indisler goze alinmalidir. Bilgisayar 0'dan saymaya baslar. 50 degeri 4'uncudur.
    /*
    int ogrNot [5]= {10,20,30,40,50};

    cout << ogrNot [4];
    */

    /// Dizide rakam secimine ek olarak, define komutu ile de rakam secebiliriz (define BOYUT 20)
    /*
    int ogrNot [BOYUT]= {10,20,NULL,40,50};

    const int boyut=20;

    cout << ogrNot [2];
    */

    return 0;
}
