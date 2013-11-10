#include <iostream>

using namespace std;

int sum(int (*term)(int), int a, int (*next)(int), int b);
int kup(int x);
int kare(int x);
int sum(int (*term)(int), int a, int (*next)(int), int b);
int sigma(int x);

int main()
{
    cout << sum(&kup, 1, &sigma, 5)  << endl;
    return 0;
}
int sum(int (*term)(int), int a, int (*next)(int), int b)
{
    int sonuc=0;

    while(a <= b) {
        sonuc += term(a);
        a++;
    }

    return sonuc;
}

int sigma(int x)
{
    return x+1;
}

int kup(int x)
{
    return x*x*x;
}

int kare(int x)
{
    return x*x;
}
