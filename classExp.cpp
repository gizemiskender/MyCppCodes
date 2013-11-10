#include <iostream>
#include <stdio.h>

using namespace std;

class Apartman{

public:

    int boy;
    int en;
    int yukseklik;

protected:

    int daireSayisi; // burda daire sayisini belirttigimde hata verip derliyor.

};


class Fiyat
    {
public:
    int Tutar(int alan)
    {
        return (alan * 100);
    }

    };

class Daire: public Apartman, public Fiyat
    {
public:
    int Alan()
    {
        return (boy * en * yukseklik);
    }
    int ToplamAlan()
    {
        int daireSayisi = 2; // o yuzden ben de burda belirttim
        return (boy * en * yukseklik * daireSayisi);
    }
    };

int main()
{
    Daire nesne1;

    nesne1.boy = 11;
    nesne1.en = 12;
    nesne1.yukseklik = 5;

    int alan = nesne1.Alan();
    cout << "apartmanin alani => " << nesne1.ToplamAlan() << endl;
    cout << "dairenin alani => " << nesne1.Alan() << endl;
    cout << "dairenin fiyati => " << nesne1.Tutar(alan) << endl;
    return 0;
}
