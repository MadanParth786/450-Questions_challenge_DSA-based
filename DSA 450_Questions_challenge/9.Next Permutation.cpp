// Next Permutation (logic)

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        vector<int> v;
        int mx=INT_MAX;
        int i,j;
        for(i=n-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            break;
        }
        if(i==-1)
        {
            sort(arr.begin(),arr.end());
            return arr;
        }
        int sm=i+1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                if(mx>arr[j])
                {
                    mx=arr[j];
                    sm=j;
                }
            }
        }
        int temp=arr[i];
        arr[i]=arr[sm];
        arr[sm]=temp;
        sort(arr.begin()+i+1,arr.end());
        return arr;
        
        
    }
};
