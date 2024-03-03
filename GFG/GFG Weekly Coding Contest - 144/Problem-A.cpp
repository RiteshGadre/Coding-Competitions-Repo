//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int chocolateDistribution(int N, int M, vector<int> &arr, vector<int> &brr) {
        // code here
        int chocolate= 0;
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        int i=0;
        int j=0;
        while(i<N && j<M){
            if(arr[i]> brr[j]) j++;
            else{
                chocolate++;
                i++;
                j++;
            }
        }
        return chocolate;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int M;
        scanf("%d",&M);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        
        vector<int> brr(M);
        Array::input(brr,M);
        
        Solution obj;
        int res = obj.chocolateDistribution(N, M, arr, brr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends