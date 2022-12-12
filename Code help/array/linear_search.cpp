#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void swapAlternet(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    // cout << "Wlecome to linear search" <<endl;

    int n = 6;
    int arry[n] = {1, 2, 3, 4, 7, 9};

    // cout<<"Enter the number to be search" <<endl;
    // int key = 2;

    // bool found = search(arry, n, key);
    // if(found){
    //     cout<<"Key is present." <<endl ;
    // }else{
    //     cout<<"Key is absent." <<endl ;
    // }

    // reverse(arry, n);
    swapAlternet(arry, n);
    printArray(arry, n);

    return 0;
}