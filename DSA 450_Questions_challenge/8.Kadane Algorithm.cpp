// Kadane's Algorithm(to Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.)
//Only logic:

#include<iostream>
using namespace std;


class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long min=0;
        long long ans=INT_MIN;
        
        for(int i=0;i<n;i++){
        	min+=arr[i];
        	ans=max(ans,min);
        	if(min<0){
        		min=0;
			}
		}
		return ans;
    }
};
