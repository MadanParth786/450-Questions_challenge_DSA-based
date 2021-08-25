#include<bits/stdc++.h>
using namespace std;
void ascending(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
	}
}

int main(void)
{
	int arr[]={4,15,20,45,3,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	ascending(arr,n);
	
}
