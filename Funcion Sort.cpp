#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int x=0;x<n;x++){
		cin>>arr[x];
	}
	sort(arr,arr+n);
	for(int x=0;x<n;x++){
		cout<<arr[x]<<" ";
	}
	return 0;
}
