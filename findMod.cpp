#include <iostream>

using namespace std;
int mod(int, int[]);
int main()
{
    int size;
    int* arr = new int[size];
    cout << "dizinin boyutunu giriniz: "<<endl;
    cin >> size;

    for(int m=0; m<size; m++)
        cin >> arr[m];

    cout<<"dizinin modu: " << mod(size, arr)<<endl;

    return 0;
}

int mod(int size, int arr[])
{
    int temp=0;
    int modval = arr[0];

    for(int k=0; k<size; k++)
    {
        int counter = 0;

        for(int i=0; i<size; i++)
        {
            if(arr[i] == arr[k])
                counter++;
            if(counter > temp)
            {
                temp = counter;
                modval = arr[k];
            }}}
  return modval;
  }


