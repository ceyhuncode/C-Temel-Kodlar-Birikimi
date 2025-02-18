#include <iostream>

#define BOYUT 20

using namespace std;

int main()
{

    /*
    /// Dizi yaziminda indexler/indisler goze alinmalidir. Bilgisayar 0'dan saymaya baslar. 50 degeri 4'uncudur.

    int ogrNot [5]= {10,20,30,40,50};

    cout << ogrNot [4];
    */

    /// Dizide rakam secimine ek olarak, define komutu ile de rakam secebiliriz

    int ogrNot [BOYUT]= {10,20,NULL,40,50};

    const int boyut=20;

    cout << ogrNot [2];




    return 0;
}
