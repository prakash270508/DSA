#include <iostream>
using namespace std;

int main()
{
    // cout<< "Welcome to Conditionls." <<endl;

    // Conditionls

    // 1. IF Else Statments
    // int a ;
    // cin>> a ;

    // if(a>=0){
    //     cout<<"Number is Positive";
    // }else{
    //     cout<<"IS negative";
    // };

    // int a,b;
    // cout<<"Enter the value of a" <<endl;
    // cin>>a;
    // cout<<"Enter the value of b" <<endl;
    // cin>>b;

    // if (a>b)
    // {
    //     cout<<"a is greater than b" <<endl;
    // }else
    // {
    //     cout<<"b is greater than a." <<endl;
    // };

    // int a = 2;
    // int b =a+1;

    // if((a=3)==b)
    // {
    //     cout<<"This is a.";
    // }
    // else{
    //     cout<<b;
    // }

    // While Loop
    //  int sum = 0;
    //  cin>>sum;
    //  int n = 100;
    //  int i = 1;

    // while (i<= n)
    // {
    //     (sum = sum +i);
    //     i = i + 2;
    // }

    // cout<<"The sum of "<<n <<" numbers is " <<sum <<endl;

    // int num = 11;
    // int j = 2;
    // int primeCheck;
    // while(j<=num)
    // {

    //     primeCheck = (num%j == 0);

    //     j++;

    // }
    //     if (primeCheck)
    //     {
    //         cout<<"The number "<<num <<" is prime";
    //     }else{
    //         cout<<"The number "<<num <<" is not prime";
    //     }

    // Fibonacci number

    int n = 10;
    int a = 0;
    int b = 1;

    for (int i = 0; i < n; i++)
    {

        int sum = a + b;

        cout<<sum <<" ";

        a = b;
        b = sum;
    }

    return 0;
}