/*
an array of size N. Which has the following specifications: Each element in the array contains either a policeman or a thief. Each policeman can catch only one thief. A policeman cannot catch a thief who is more than K units away from him. We need to find the maximum number of thieves that can be caught.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N,count=0;
    cin >> N;
    vector<char> arr(N);
    vector<int> p,t;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for(int i=0;i<N;i++){
        if(arr[i]=='P'){
            int s=i-k;
            int e=i+k;
            if(s<0){
                s=0;
            }
            for(int idx=s;idx<=e;idx++){
                if(arr[idx]=='T'){
                    count++;
                    arr[idx]='C';
                    break;
                }
            }
        }
    }
    cout << "Maximum thieves caught: "<< count;
    return 0;
}
