#include <iostream>

using namespace std;

class X
{
    static int one;
    int number;
    public:
        X(int=0);
        X& change(int);
        void print();
};
int X::one=3;

X::X(int a)
{
    one+=3;
    number=a;
}
void X::print()
{
    cout << one<<" "<<number<<endl;
}
X& X::change(int b)
{
    number*=b;
    return *this;
}
int main()
{
    X obj1(3);
    obj1.print();
    obj1.change(4).change(5).change(10).print();
    X obj2(5);
    obj2.print();
    X obj3(14);
    obj3.print();

    return 0;
}
