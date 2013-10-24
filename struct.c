#include <stdio.h>
#include <stdlib.h>

struct birey
{
    char *isim;
    char *soyisim;
    int yas;
};

void printB1( struct birey *b1 );
int main()
{
    struct birey b1; // birey tipinde b1 degiskeni tanımladim
    //struct birey *b1ptr; // yine birey tipinde bir pointer tanimladim.

    b1.isim = "gizem";
    b1.soyisim = "iskenderoglu";
    b1.yas = 20;


    //b1ptr = &b1; // pointera b1 in adresini verdim.

    printB1(&b1); // fonksiyon ile degiskenleri yazdirdim.

    return 0;
}

void printB1( struct birey *b1 )
{
    printf("bireyin adi: %s %s \n",b1->isim, b1->soyisim);
    printf("%s %s, %d\n",b1->isim, b1->soyisim, b1->yas );
    printf("%s %s, %d \n", (*b1).isim, (*b1).soyisim, (*b1).yas);
}



