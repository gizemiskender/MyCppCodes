#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include "header.h"

using namespace std;

void BaseClass::dosyaOku(string dosya_isim)
{
    ifstream dosya(dosya_isim.c_str());
    dosya.open("dosya.data");
    for(int i=0; i<size; i++)
    {
        dosya >> dizi[i];
       // cout << dizi[i] <<endl;
    }
    dosya.close();
}

void BaseClass::dosyaYaz(string dosya_isim)
{
    ofstream dosya(dosya_isim.c_str());
    dosya.open("dosya.data");
      for(int i=0; i<size; i++)
    {
        dizi[i] = rand()%20;
        dosya << dizi[i] <<endl;
    }
    dosya.close();
}

void BaseClass::print()
{
    for(int i=0; i<size; i++)
    {
        cout << dizi[i] <<endl;
    }
}

void DerivedClass::print()
{
    cout << "derived classtan sunlar geldi: " << name <<endl;
}

int main()
{
    cout << "Hello world!" << endl;
    BaseClass nesne1(10);
    BaseClass nesne2(10);
    BaseClass* nesne = new BaseClass;

    DerivedClass Dobj("gizem");

    BaseClass* Baseptr = &Dobj;
    Baseptr-> print();

    nesne1.dosyaYaz("a.txt");
    nesne1.dosyaOku("a.txt");
    nesne1.print();

    return 0;
}
