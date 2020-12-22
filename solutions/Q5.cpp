//Q. move all negative numbers to beginning and positive to end with constant extra space
// it is similar to partition process of quicksort, as we need to sort wrt pivot.
//method 1
#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
	int j=0; 
	for(int i=0; i<n; i++)
	{
		if(arr[i] <0){
			if(i != j)
				swap(arr[i], arr[j]);
			j++;
		}

	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout<<arr[i]<<" ";
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];

	}
	rearrange(arr,n);
	printArray(arr,n);
	return 0;

}
