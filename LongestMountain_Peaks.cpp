#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxLength(vector<int> a){
    int n=a.size();
    int maxx=0;
    for(int i=1;i<n-1;){
        if(a[i]>a[i-1] and a[i]>a[i+1]){
            //peak found
            int count=1;
            int j=i;
            //count forward
            while(j>=1 and a[j]>a[j-1]){
                count++;
                j--;
            }
            while(i<=n-2 and a[i]>a[i+1]){
                count++;
                i++;
            }
            maxx = max(maxx,count); 
        }
        else
        {
            i++;
        }
          
    }
    return maxx;
}
int main()
{
    vector<int> a={5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    
    int max = maxLength(a);
    cout<<max;
    return 0;
            
}