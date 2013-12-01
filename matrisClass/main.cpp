#include <iostream>
#include <fstream>
#include "matris.h"

using namespace std;

Matris::Matris()
{
   // ifstream dosyayaz;
   // ofstream dosyaoku;
   // dosyaoku.open("dosya.data");
   // dosyayaz.open("dosya.data");

    int dizi[4] = { 3, 4, 8, 9};


    //for(int m=0; m<4; m++)
     //   dosyaoku << dizi[m] <<endl;

   // dosyayaz >> satir;

    enb = dizi[0];
    for (int i=0; i<4; i++)
    {
        if(dizi[i] > enb)
            enb = dizi[i];
    }

    enk = dizi[0];
    int toplam=0;
     for (int k=0; k<4; k++)
    {
        if(dizi[k] < enk)
            enk = dizi[k];
         toplam +=dizi[k];
    }
    orta = toplam/4;
}

void Matris::okuma()
{
    ifstream dosyaoku;
    dosyaoku.open("x.data");
    dosyaoku >> satir ;
}

void Matris::yazma(ofstream& dosya , int n)
{
    int dizi[4] = { 3, 4, 8, 9};
    for(int i=0; i<n; i++)
        dosya << dizi[i] <<endl;
    dosya << "dizinin en kucuk elemani " << enkucuk() <<endl;
}

int Matris::enkucuk()
{
return enk;
}

int Matris::enbuyuk()
{
    return enb;
}

int Matris::ortadeger()
{
    return orta;
}


int main()
{

    Matris A;
    Matris B;
    cout <<"A matrisinin en kucuk degeri " << A.enkucuk() <<endl;
    cout <<"A matrisinin en buyuk degeri " << A.enbuyuk() <<endl;
    cout <<"A matrisinin orta degeri " <<A.ortadeger() <<endl;

    ofstream dosyaB;
    dosyaB.open("b.txt");

    ofstream dosyaA;
    dosyaA.open("a.txt");

    B.okuma();
    B.yazma(dosyaB, 4);

    A.okuma();
    A.yazma(dosyaA, 4);

    return 0;
}







