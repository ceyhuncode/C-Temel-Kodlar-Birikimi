#include <iostream>
///#include "header01.h"

using namespace std;

/// File > New > File... > menusune girip header secilir, kodlarin bölümlendirilmesinde kullanilabilir.
    ///inclue ve (") cift tirnak ile header dosyasina baglanilabilir.
    /// headerin eklendigi yer onemlidir.
    //headerda ana cpp dosyasinda ihtiyac duyulan bir kod varsa mutlaka baglanmalidir.
/*
int main()
{
    cout << toplama (3,7) << endl;
    cout << kareAl (3.12);

    return 0;
}
*/

/// 3 sayiyi toplama (header kullanilmamaktadir)
/// ayni isme sahip fonksiyonlarla bu yapilabilir, buna fonksiyon asiri yuklemesi/function overload denir.


int toplama (int x, int y) {
int z;
z=x+y;

return z;
}

int toplama (int x, int y, int t) {

int z;
z=x+y+t;

return z;
}

int main()

{
    cout << toplama(3,2) << endl;
    cout << toplama (3,2,1) << endl;

    return 0;
}
