#include<bits/stdc++.h>
using namespace std;
#include <algorithm>
int main(void)
{
	int a[]={5,7,9,1,6,4,3};
	int n = sizeof(a) / sizeof(a[0]);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Min Element: "<<a[n-1]<<"\n";
	cout<<"Max Element: "<<a[0]<<"\n";
	
}
