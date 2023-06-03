//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
          vector<int>pre1(N1);
       pre1[0]=S1[N1-1];
       for(int i=1; i<N1;i++){
           pre1[i]=S1[N1-i-1]+pre1[i-1];
       }
        vector<int>pre2(N2);
       pre2[0]=S2[N2-1];
       for(int i=1; i<N2;i++){
           pre2[i]=S2[N2-i-1]+pre2[i-1];
       }
        vector<int>pre3(N3);
       pre3[0]=S3[N3-1];
       for(int i=1; i<N3;i++){
           pre3[i]=S3[N3-i-1]+pre3[i-1];
       }
       
      
       int i=N1-1;
       int j=N2-1;
       int k=N3-1;
       int mini=min(pre3[k], min(pre2[j], pre1[i]));
       while(pre1[i]!=mini || pre2[j]!=mini || pre3[k]!=mini){
           
           if(pre1[i]!=mini)
         {  i--;
           if(i==0) return 0;}
           if(pre2[j]!=mini)
           {  j--;
           if(j==0) return 0;}
           if(pre3[k]!=mini)
           {  k--;
           if(k==0) return 0;}
            mini=min(pre3[k], min(pre2[j], pre1[i]));
       }
       
       return mini;
       
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends