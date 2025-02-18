#include <iostream>

using namespace std;

int main()
{

    /// While konusunun icinde for komutu da vardir.
    ///For dongusunde basit acidan yaziminda baslangic, artis, bitis degerleri yazilir.
    ///Asagidaki kodda yer alan calisma mantigina göre,, i 1'den baþlayarak 5'e kadar yazacaktir.

    /*
    int i;

    for (i=1; i<=5; i++) {
        cout << i << " ";
    }
    */

    /// int girisi istenirse for'un icine yazilabilir ve eger yazilirsa, deger sadece for icin olur. ama disarida ise tum kodlama icin olur.
    ///Ayrica int degerleri tekrar tekrar kullanilabilir.

    /*
    for (int i=1; i<=5; i++) {
        cout << i << " ";

    for (int i=10; i>1; i--) {
        cout << i << " ";
    }

    */

    /// cout i'nin cikis degeri ile de donguye artis yaptirilabilir.
    /*
    int i;

    for(i=1; i<=5; i++) {
        cout << i << " ";
    }
     cout << "i'nin cikis degeri: " << i;
    */

     /// While icerisine while yazilabilir.
    /// Asagidaki ornek kodda, isleyis söyledir -> Eger "deger" L'den kucukse degeri arttýr ki deger A, bir de ic kisim while degeri saglaniyorsa max 5 alfabe dizisi yazdir.

    /*
     int i=1;
     char deger;
     while(i<=5)
        {
         deger='A';
         while (deger<='L')
         {
             cout << deger++;
         }
            cout << endl;
            i++;
     }
     */

     /// For ile carpim tablosu yapimi
     /// kurallar iceriden disariya dogru okunursa daha iyi olur.
     /// "\t" ile bosluk duzeltme yani hizalama yapilir.

     /*
     for (int i=1;i<=10;i++) {
        for (int j=1;j<=10;j++){
            cout << j << "x" << i << "=" << i*j << "\t";
        }
        cout << endl;
     }
    */

     /// for icerisine yazilan girdiler arasinda gidis hizina gore, sayim hizina gore islem bitirme yapilabilir.
     /// verilen islem komutu ile istenilen sonuca en hizli varan for dongusunu bitirecek.

     /*
     for (int i=1, j=5; i<=19 && j<=400; i+=2, j+=5) {
        cout << i << "\t" << j << endl;
     }
    */

    /// girilen sayinin faktoriyelini hesaplama for donugus icinde

    /*
    int n;
    cout << "Faktoriyeli hesaplanacak degeri giriniz: ";
    cin >> n;
    int f=1;

    for (int i=2; i<=n; i++) {
    f=i*f;

    cout << f ;
    }
    */

    /// belirli degerler girildikten sonra yani a ve b. a ve b'nin toplami ve ilk hallerinin toplaminin sonuclarini gosteren kod.

    /*
    int a,b;
    cout << "iki sayi giriniz: ";
    cin >> a >> b;

    int temp_a=a;
    int temp_b=b;

    for (int i=5;i<5;i++) {
        a=a+i;
        b=b+i*2;
        }

    cout << "Toplam= " << a+b << endl;
    cout << "Toplam= " << temp_a + temp_b << endl;

 cout << "a=" << a << " ve " << "b=" << b << endl;
    */

    ///Ters pascal ucgeni cizer kod.
    /// yildiz ornekleri for dongusunu iyi ogretir.

    int i,j;
    for (i=1; i<=5; i++)
    {
        for (j=5; j>=i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
