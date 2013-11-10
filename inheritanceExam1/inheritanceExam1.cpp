#include <iostream>
#include <string>

using namespace std;

class BaseClass
{
    public:
        BaseClass(int a, string n):
            age(a), name(n) {};
        BaseClass();
        void print();

    private:
        int age;
        string name;
};

void BaseClass::print()
{
    cout << "name: "<< name <<endl;
    cout <<"age: " <<  age <<endl;
}

BaseClass::BaseClass()
{
    age = 0;
    name = "nobody else";
}

class derivedClass: public BaseClass
{
    public:
        derivedClass(int ID):
            id(ID) {};
        derivedClass();
        void printD();

    private:
        int id;
};

void derivedClass::printD()
{
    BaseClass::print();

    cout <<"id: " << id <<endl;
}

derivedClass::derivedClass()
{
    id = 0;
}

int main()
{
    BaseClass A(23, "kamil");
    derivedClass B;
    derivedClass C(3456);

    A.print();
    B.printD();
    C.printD();

    return 0;
}
