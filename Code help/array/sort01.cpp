#include <iostream>
using namespace std;

int main()
{

    // cout<<"Welcome" ;

    int n = 5;
    int arr[n] = {0, 1, 1, 0, 1};

    int i = 0, j = n - 1;
    while (i <= j)
    {
        while (arr[i] == 0 && i <= j)
        {
            i++;
        }

        while (arr[j] == 1 && i <= j)
        {
            j--;
        }

        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout<<endl;

    return 0;
}