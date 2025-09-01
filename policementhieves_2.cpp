 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    vector<char> arr(N);
    vector<int> p,t;
    for(int i=0;i<N;i++){
        cin >> arr[i];
        if(arr[i]=='P'){
            p.push_back(i);
        }else{
            t.push_back(i);
        }
    }
    int k;
    cin >> k;
    size_t i=0,j=0;
    int count=0;
    while(i<p.size() && j<t.size()){
        if(abs(p[i]-t[j])<=k){
            count++;
            i++;
            j++;
        }else if(p[i]<t[j]){
            i++;
        }else{
            j++;
        }
    }
    cout << "Maximum thieves caught: "<< count;
    return 0;
}
