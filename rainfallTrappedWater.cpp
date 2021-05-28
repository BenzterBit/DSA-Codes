#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int waterTrapped(vector<int> x){
    vector<int> l,r;
    int maxsofar=0;
    int area=0;
    for(int i=0;i<x.size();i++)
    {
        maxsofar=max(maxsofar,x[i]);
        l.push_back(maxsofar);
    }
    maxsofar=0;
    for(int i=x.size()-1;i>=0;i--)
    {
        maxsofar=max(maxsofar,x[i]);
        r.insert(r.begin(),maxsofar);
    }
    
    for(int i=0;i<x.size();i++)
    {
        area+=min(l[i],r[i])-x[i];
    }
    return area;
}

int main()
{
    vector<int> x{0,1,0,2,1,0,1,3,2,1,2,1};
    int water = waterTrapped(x);
    cout<<water;

    return 0;
}
