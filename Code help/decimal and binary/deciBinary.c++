#include <iostream>
#include <math.h>
using namespace std;

int numToBinary(int n)
{

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        cout << bit;

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;

        i = i + 1;
    }

    cout << endl;
}

int binaryToNum(int n)
{

    // int ans = 0;
    // int i = 0;

    // while (n != 0)
    // {
    //     int digit = n % 10;

    //     if (digit == 1)
    //     {
    //         ans = ans * pow(2, i);
    //     }

    //     n = n / 10;
    //     i++;
    // }

    // cout << ans;
}

int main()
{

    // cout<<"Hello Decimal and binary.";

    // Number to binary
    // Steps:-
    //  1. Divide the given number until n!=0;
    //  2.Store remainder in Answer;
    //  Reverse answer and get binary.

    numToBinary(5);
    binaryToNum(101);

    int ans = 0;
    int n = 101;
    int i = 0;

    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
        {
            ans = ans * pow(2, i);
        }

        n = n / 10;
        i++;
    }

    cout << ans;

    return 0;
}