//Triplet sum , O(n^2) time and O(1) space
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> tripsum(vector<int> a,int sum){
    vector<vector<int>> result;
    sort(a.begin(),a.end()); //nlogn
    for(int i=0;i<a.size();i++){
        //two pointer pair sum approach 
        //o(n)
        vector<int> temp;
        int l=i+1;
        int r=a.size()-1;

        int req=sum-a[i];
        while(l<r){
            if(a[l]+a[r]==req){
            result.push_back({a[i],a[l],a[r]});
            l++;
            r--;
            }
            else if(a[l]+a[r]>req){
            r--;
            }
            else{
            l++;
            }
        }
        
    }
    return result;
}
int main()
{
    vector<int> a={1,2,3,4,5,6,7,8,9,15};
    int sum=18;
    
    vector<vector<int>> trips=tripsum(a,sum);
    for(auto x:trips){
        for(int i:x){
            cout<<i<<",";
        }
        cout<<endl;
    }
    return 0;
}
