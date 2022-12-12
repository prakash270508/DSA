#include <iostream>
using namespace std;

//WE use binary search insteed of linear search because in linear search we have to transverse in all array here we will treansverse only in logN. So time complexity of binary search is lower than that of linear search......


int binarySearch(int*arr, int size, int key){

    int start  = 0 ;
    int end = size;

    // int mid = (start+ end)/2;

    //For larger value we should use
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if(arr[mid] == key){
            return mid ; 
        }

        //Desicion of left and right
        if(key > arr[mid]){
            start = mid + 1 ;
        }else{
            end = mid - 1 ;
        }

        mid = start + (end - start)/2;
    }

    return -1 ;
}

int main(){

    // cout<<"Welcome to Binary search"

    int even[6] = {1,3, 4, 5,6 ,9}; 
    int odd[5] = {3, 4,5 , 6,7}; 

    int index = binarySearch(odd, 5, 5);
    cout<<"The index of 5 in even is " <<index <<"."; 

    return 0;
}