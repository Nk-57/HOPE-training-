#include<bits/stdc++.h>
using namespace std;
int rotate(int n)
{
    unordered_map<char,char> num={{'0','0'},{'1','1'},{'6','9'},{'8','8'},{'9','6'}};
    string s=to_string(n),ans;
    for(int i=0;i<s.size();i++)
    {
        ans+=num[s[i]];
    }
    reverse(ans.begin(),ans.end());
    if(ans==s)
    {
           return 1; 
    }
    return 0;
}
int main(){
    int a;
    cin >> a;
    int s=pow(10,a-1);
    int e=pow(10,a);
    for(int i=s;i<e;i++){
        int t=rotate(i);
        if(t==1){
            cout << i << " ";
        }
    }
}
