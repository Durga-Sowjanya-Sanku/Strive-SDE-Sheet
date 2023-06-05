#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{

    long long MS =0;
    long long S=0;
    for(int i=0;i<n;i++)
    {
        S = S + arr[i];
        MS = max(MS,S);
        if(S<0)
        {
            S=0;
        }
        
    }

    return MS;
}