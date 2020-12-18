//kth smallest element
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
 	ll n, k;
 	cin>>n;
 	ll arr[n];
 	for(int i=0; i<n; i++){
 		cin>>arr[i];
 	}
 	sort(arr, arr+n);
 	cin>>k;
 	cout<<arr[k-1];
 	cout<<endl;
 }
 return 0;

}