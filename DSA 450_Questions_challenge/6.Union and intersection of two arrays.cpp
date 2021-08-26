#include<iostream>
using namespace std;

void Union(int arr1[],int arr2[],int m,int n)
{
	int i,j=0;
    while( i<m and j<n){
	
 		if(arr1[i]<arr2[j]){
 			cout<<arr1[i++]<<" ";
 			
		 }
		 else if(arr1[i]>arr2[j]){
		 	cout<<arr2[j++]<<" ";
		 }
		 else{
		 	cout<<arr2[j++]<<" ";
		 	i++;
		 }
		 
	 }
 
  while(i<m){
  	cout<<arr1[i++]<<" ";
  	
  }
  while(j<n){
  	cout<<arr2[j++]<<" ";
  }
}

void Intersection(int arr1[],int arr2[],int m,int n)
{
	int i,j=0;
    while( i<m and j<n){
	
 		if(arr1[i]<arr2[j]){
 			i++;
 			
		 }
		 else if(arr1[i]>arr2[j]){
		 	j++;
		 }
		 else{
		 	cout<<arr2[j++]<<" ";
		 	i++;
		 }
		 
	 }
}



int main(void){
	int arr1[] = {4,6,8,9};
    int arr2[] = {1,2,3}; 
    int m = sizeof(arr1)/sizeof(arr1[0]); 
    int n = sizeof(arr2)/sizeof(arr2[0]); 
    cout << "Union of two arrays is :"; 
    Union(arr1, arr2, m, n);
	cout<<endl; 
    cout << "Intersection of two arrays is "; 
    Intersection(arr1, arr2, m, n); 
}
