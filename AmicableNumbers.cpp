#include <iostream>
#define MAX 10000

using namespace std;
int BolenToplami(int deger);

int main()
{
    for(long i = 2; i < MAX; i++)
    {
        int b = BolenToplami(i);
        for (long k = 0; k < i; k++)
            if (b == k && BolenToplami(k) == i)
                cout << i << " " << b << endl;
    }

    return 0;
}
int BolenToplami(int deger)
{
    int toplam = 1;
    int k;

    for(k = 2; k <= deger/2; k++)
    {
        if(deger % k == 0)
            toplam+=k;
    }
return toplam;
}
