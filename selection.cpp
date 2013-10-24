#include <iostream>
int SIZE = 5;

void selection(int[], int );
using namespace std;


int main()
{
    int dizi[SIZE];
    for(int i = 0; i < SIZE; i++)
        cin >> dizi[i];

    selection(dizi, SIZE);

    for(int k = 0; k < SIZE; k++)
        cout << dizi[k] <<endl;

    return 0;
}
void selection(int dizi[], int SIZE)
{
    int temp;
    int minindis;

    for(int i = 0; i < SIZE-1; i++)
    {
        minindis = i; //dizinin en kucuk elemenını dizinin ilk indisli elemanı varsaydık.
        for(int j = i; j < SIZE ; j++)
        {
            if(dizi[j] < dizi[minindis])
                minindis = j;
        }

        temp = dizi[i];
        dizi[i] = dizi[minindis];
        dizi[minindis] = temp;
    }
}
