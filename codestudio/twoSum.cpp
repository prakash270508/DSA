#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

// ques :-) Two sum
//Ques link :-) https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1


vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector <vector<int> > ans;
    
    for(int i=0; i<arr.size(); i++){
        
        for(int j = i+1 ; j<arr.size(); j++){
            if(arr[i] + arr[j] == s){
                vector<int> temp ;
                temp.push_back(min(arr[i],  arr[j]));
                temp.push_back(max(arr[i],  arr[j]));
            
                ans.push_back(temp);
            }
        }
        
    }
    
    sort(ans.begin() , ans.end()); // Sorting the arrays
    
    return ans ;
}

int main(){
    
    // cout<<findArrayIntersection(arr1[],n ,arr2, m);

    return 0 ; 
}