#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int k;
	int arr[]={1,24,95,41,36,22,50};
	int n=sizeof(arr)/sizeof(arr[0]);
		for(int i=1;i<=n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
		}
	cout<<"\n";
	cout<<"Enter the K value: "<<"\n";
	cin>>k;
	cout<<"Array" kth smallest element is: "<<arr[k]<<"\n";
	
	
}
