#include <iostream>
using namespace std;

int printArraay(int ary[], int size)
{

    cout << ary[2] << endl;

    for (int i = 0; i < size; i++)
    {
        cout << ary[i] << " "; // We got 0 for undefined arry items.
    }
    cout<<endl;
}


void updatingArry(int ary[], int n){

    cout<<"Inside update function" <<endl ;

    //updating array

    ary[0] = 1299 ; 

    for (int i = 0; i < n; i++)
    {
        cout<<ary[i] <<" " ;
    }
    cout<<endl;

    cout<<"Outside from function" <<endl ;
}

//****** HomeWorks

// Ques 1 :-)

int sumArray (int aary[], int n){

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + aary[i];
    }
    

    return sum ;

}

int main()
{

    // cout<<"Welcome to array." <<endl;

    int n = 6;
    int arry[n] = {1, 2, 3, 4, 7, 9};

    // cout<<"Size of array is " <<sizeArry <<"." <<endl;

    // printArraay(arry, sizeArry);

    // char cahrArray[n] = {'a', 'e', 's', 'b'};

    // cout<<cahrArray[3] ;

    // cout<<"From main function after calling function" <<endl ; 

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arry[i] <<" " ;
    // }
    // cout<<endl;


    // updatingArry(arry, n); 

    // cout<<"From main function after calling function" <<endl ; 

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arry[i] <<" " ;
    // }
    // cout<<endl;


    // ****** Homework

    cout<<"The sum of the elements of given array is " <<sumArray(arry, n) <<".";
    

    return 0;
}