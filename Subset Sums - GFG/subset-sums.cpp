// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

   void ans(vector<int>&arr, int N,int sum,vector<int>&res,int ind)
   {
       if(ind==N)
       {
           res.push_back(sum);
           return;
       }
       ans(arr,N,sum+arr[ind],res,ind+1);
       ans(arr,N,sum,res,ind+1);
   }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> res;
        ans(arr,N,0,res,0);
        return res;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends