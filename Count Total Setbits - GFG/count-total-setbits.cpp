//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    long long countBits(long long N) {
        vector<long long>v;
        v.push_back(1);
        while(true)
        {
            if(v.back()>(long long)1e18)
            break;
            else
            v.push_back(v.back()*1ll*2);
        }
        int x=upper_bound(v.begin(),v.end(),N)-v.begin();
        long long ans=0;
        for(int i=0;i<x;i++)
        {
            long long x=(1<<i);
            long long y=(x*2);
            long long fact=(N/y);
            ans+=fact*x;
            if((N%y)>=x)
            ans+=((N%y)-x+1);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends