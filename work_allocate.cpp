#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<char> ch;
    vector<int> work,days;
    char q;
    int w,e;
    while(cin >> q >> w >> e){
        ch.push_back(q);
        days.push_back(w);
        work.push_back(e);
    } 
    int n=ch.size();
    priority_queue<pair<int,pair<char,int>>> map;
    for(int i=0;i<n;i++){
        map.push({work[i],{ch[i],days[i]}});
    }
    int maxday=*max_element(days.begin(),days.end());
    int sum=0;
    vector<char> visited(maxday+1,'-');
    vector<char> order;
    while(!map.empty()){
        int a=map.top().first;
        char b=map.top().second.first;
        int c=map.top().second.second;
        map.pop();
        for(int i=min(c,maxday);i>0;i--){
            if(visited[i]=='-'){
                visited[i]=b;
                break;
            }
        }
    }
    for(int i=1;i<visited.size();i++){
        cout << visited[i] << " ";
    }
    return 0;
}
