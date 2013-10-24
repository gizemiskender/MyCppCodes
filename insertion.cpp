#include <iostream>
int SIZE = 5;

void insertion(int[], int);
using namespace std;

int main()
{
    int dizi[SIZE];

    for(int i = 0; i < SIZE; i++)
        cin >> dizi[i];

    insertion(dizi, SIZE);

    for(int k = 0; k < SIZE; k++)
        cout << dizi[k] << " ";

    return 0;
}

void insertion(int dizi[], int SIZE)
{
    int elde;
    int j;

    for(int i = 1; i < SIZE; i++)
    {
        elde = dizi[i];
        j = i;
            while(j>0 && dizi[j-1] > elde)
            {
                dizi[j] = dizi[j-1];
                j--;
            }

        dizi[j] = elde;
        }


}
