#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> work(n),days(n);
    for(int i=0;i<n;i++){
        cin >> days[i] >> work[i];
    } 
    priority_queue<pair<int,int>> map;
    for(int i=0;i<n;i++){
        map.push(make_pair(work[i],days[i]));
    }
    int maxday=*max_element(days.begin(),days.end());
    int sum=0;
    vector<bool> visited(maxday+1,false);
    while(!map.empty()){
        int a=map.top().first;
        int b=map.top().second;
        for(int i=b;i>0;i--){
            if(!visited[i]){
                sum+=a;
                visited[i]=true;
                break;
            }
        }
        map.pop();
    }
    cout << sum;
    return 0;
}
