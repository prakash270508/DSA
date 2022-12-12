#include <iostream>
using namespace std;

void increaseSort(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

void decreaseSort(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

int main()
{

    cout<<"Welcome to Sorting." <<endl; 

    int n = 6;
    int arr[n] = {2, 4, 5, 43, 6, 1};

    increaseSort(arr, n);

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    decreaseSort(arr, n);

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout<< endl;

    return 0;
}