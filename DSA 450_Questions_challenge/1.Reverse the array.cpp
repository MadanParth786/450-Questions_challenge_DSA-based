//Reverse the array
#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Reverse Array: ";
	for(int i=n-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
}
