/*  
Given the arrival and departure times of all trains that reach a railway station, the task is to find the minimum number of platforms required for the railway station so that no train waits. We are given two arrays that represent the arrival and departure times of trains that stop.

Input Format

size of the array first array is arrival time elements second array is departure times elements

Constraints

Constraints: 1 ≤ n ≤ 50000
0000 ≤ A[i] ≤ D[i] ≤ 2359

Expected Time Complexity: O(nLogn) Expected Auxiliary Space: O(1)

Output Format

print the minimum platforms

Sample Input 0

6
900 940 950 1100 1500 1800
910 1200 1120 1130 1900 2000
Sample Output 0

3
Explanation 0

Minimum 3 platforms are required to safely arrive and depart all trains.

Sample Input 1

3
900 1100 1235
1000 1200 1240
Sample Output 1

1
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    vector<int> arr(n),dep(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cin >> dep[i];
    }
    int i=0,j=0, count=0,ans=0;
    sort(dep.begin(),dep.end());
    while(i<n && j<n){
        if(arr[i]>dep[j]){
            count--;
            j++;
        }else{
            count++;
            i++;
            ans=max(count,ans);
        }
    }
    cout << ans;
}
