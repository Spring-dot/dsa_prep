#include<bits/stdc++.h>
using namespace std;
//the diff coordinates are given to confuse you/time waste

class Solution{
public:
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int i=0;
int ans=0;
while(i!=A.size()-1)
{
 int p=max(abs(A[i+1]-A[i]),abs(B[i+1]-B[i]));
 ans=ans+p;
 i++;
 }
 return abs(ans);
}
};

