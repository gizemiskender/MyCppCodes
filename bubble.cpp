#include <iostream>
const int SIZE = 5;
using namespace std;

void bubble(int[], int);
int main()
{
    int dizi[5] = {1,9,5,6,3};
    bubble(dizi,SIZE);

    for(int k; k < SIZE; k++)
        cout << dizi[k] << " " <<endl;
    return 0;
}
void bubble(int dizi[], int SIZE)
{
    for(int i = 0; i < SIZE-1; i++)
    {
        int temp;
        for(int j = 0; j < SIZE-1; j++)
        {
            if(dizi[j] > dizi[j+1])
            {
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
        }
    }
}
