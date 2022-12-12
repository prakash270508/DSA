#include <iostream>
#include <math.h>
using namespace std;

// Function Signature
//  return_Type functionName( argument/ parameter ){
//      Function Body
//  }

// ** Power function
//  int power(int a, int b){
//      int ans = 1 ;

//     for (size_t i = 0; i < b; i++)
//     {
//         ans = ans * a ;
//     }

//     cout<<"The answer is "<<ans <<".";

// }

// *** nCr Problem (Factorial)
// nCr = n!/(r!* (n-r)!)

// int factorial(int n)
// {
//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         fact = (fact * i);
//     }

//     return fact;
// }

// int nCr(int n, int r)
// {
//     int ncr = 1;

//     ncr = factorial(n) / (factorial(r) * factorial(n - r));

//     if(ncr == 0){
//         ncr = 1;
//     }

//     return ncr;
// }

int dummy(int n){
    n -= 5;
    return n;
}

//****** Homeworks
// Question no 1 :-) fibonachiii
// int fibonchiReverse(int n)
// {

//     int sum = 0;
//     int a = 0;
//     int b = 1;

//     for (int i = 0; i < n; i++)
//     {
//         sum = a + b;
//         a = b;
//         b = sum;
//     }
//     cout << sum << endl;
// }
int main()
{

    // cout<<"Welcome to Functions." <<endl;

    // power(12, 3);
    // cout<<nCr(4, 5);

    // fibonchiReverse(5);

    int n = 45;

    cout<<dummy(n) <<endl;
    cout<<"This is from main "<<n <<endl ;


    return 0;
}