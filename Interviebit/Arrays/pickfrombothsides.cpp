#include<bits/stdc++.h>
using namespace std;

//if we go through method like if--else, in that case continuity will break while selecting elements so WA for below code
// int Solution::solve(vector<int> &A, int B) {
    
//     int sum=0;
//     int left = 0;
//     int right = A.size()-1;
//     int count =0;
//     while(count<=B)
//     {

//         if(A[left]>A[right])
//         {
//             sum+= A[left];
//            // cout<<sum<<" "<<count<<" ";
//             count++;
//             left++;
//         }
//         else{
//             sum+= A[right];
//           //  cout<<sum<<" "<<count<<" ";
//             count++;
//             right--;
//         }
//     }
//     return sum;
// }
class Solution{
public:
int Solution::solve(vector<int> &A, int B) {
    for(int i=1;i<(int)A.size();i++){
        A[i]+=A[i-1];
    }
    int n = A.size();
    int ans = INT_MIN;
    for(int i=0;i<=B;i++){
        ans = max(ans, (i>0?A[i-1]:0) + A[n-1]-A[n-1-B+i]);
    }
    return ans;
}

};
