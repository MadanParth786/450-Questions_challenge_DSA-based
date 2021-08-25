#include<bits/stdc++.h>
using namespace std;
void move(int a[],int n){
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
	int arr[]={-11,2,-10,20,30,-11,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	move(arr,n);
	
}
