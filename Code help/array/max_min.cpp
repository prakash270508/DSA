#include <iostream>
#include <math.h>
using namespace std;

int getMax(int num[], int n){

    int max = 0;


    for (int i = 0; i < n; i++)
    {
        if(max < num[i]){
            max = num[i] ; 
        }
    }

    return max;
}

int getMin(int num[], int n){

    int min = INT16_MAX;


    for (int i = 0; i < n; i++)
    {
        if(min > num[i]){
            min = num[i] ; 
        }
    }

    return min;
}


int main(){

    // cout<<"Welcome to max_min Question" <<endl; 

    int num[5] = {2, 3, 44,-2, -19};

    cout<<"The maximum in the aray is " <<getMax(num, 5) <<"." <<endl ;
    cout<<"The minumum in the aray is " <<getMin(num, 5) <<"." <<endl ;

    return 0;
}
