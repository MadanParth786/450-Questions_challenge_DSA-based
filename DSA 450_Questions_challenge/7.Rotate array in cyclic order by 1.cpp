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
	cout<<a[n-1]<<" ";
	a[0]=a[n-1];
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
