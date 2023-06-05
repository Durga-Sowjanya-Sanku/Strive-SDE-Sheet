#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    int dip=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(p[i]<p[i+1])
        {
            dip=i;
            break;
        }
    }
    if(dip==-1)
    {
        reverse(p.begin(),p.end());
    }
    else
    {
        for(int i=n-1;i>dip;i--)
        {
            if(p[i]>p[dip])
            {
                swap(p[i],p[dip]);
                break;
            }
        }
        sort(p.begin()+dip+1,p.end());
    }

    return p;
}