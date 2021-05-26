#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxLength(vector<int> a){
    int n=a.size();
    bool inc=a[0]<a[1];
    bool dec=a[0]>a[1];
    int max=0;
    int len=1; int prev=a[0];
    for(int i=1;i<n;i++){
        
        if(a[i]>prev && inc==true){
            len++;
            prev=a[i];
            continue;
        }
        if(a[i]<prev && inc==true){
            len++;
            prev=a[i];
            inc=false;
            dec=true;
            continue;
        }
        if(a[i]>prev && dec==true){
            max=(max>len)?max:len;
            len=2;
            prev=a[i];
            dec=false;
            inc= true;
            continue;
        }
        if(a[i]<prev && dec==true){
            len++;
            prev=a[i];
            continue;
        }
    }
    if(dec==true)
    max=(max>len)?max:len;
    return max;
}
int main()
{
    vector<int> a={5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    
    int max = maxLength(a);
    cout<<max;
    return 0;
            
}
