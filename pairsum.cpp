//Pair Sum Problem
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec{10,5,2,3,-6,9,11};
    int sum=4;
    unordered_set<int> s;
    for(int i=0;i<vec.size();i++){
        int req=sum-vec[i];
        if(s.find(req)!=s.end()){
            cout<<vec[i]<<" and "<<req;
            break;
        }
        s.insert(vec[i]);
    }
    
    return 0;
}