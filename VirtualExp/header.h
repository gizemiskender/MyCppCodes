#include <iostream>
#include <string>

using namespace std;

class BaseClass
{
    public:
        BaseClass(): size(0) {};
        BaseClass(int s): size(s) {};
        void dosyaYaz(string);
        void dosyaOku(string);
        virtual void print();
        BaseClass* nesneptr;

    private:
        int size;
        int dizi[];

};

class DerivedClass: public BaseClass
{
    public:
        DerivedClass();
        DerivedClass(string n): name(n) {};
        void print();

    private:
        string name;
};




