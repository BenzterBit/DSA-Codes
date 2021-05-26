#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largestBand(vector<int> arr){
    int n=arr.size();
    unordered_set<int> a; //used for O(1) lookup
    for(auto x:arr){
        a.insert(x);
    }
    int head;
    int largest =0;
    for(int i=0;i<n;i++){
        auto it=a.find(arr[i]-1);
        if(a.find(arr[i]-1)!=a.end()){ // if there exists a predesessor value i.e arr[i]-1 in set
            continue;           //means the current element is not the head of a band therefore we move to next
        }
        else{
            head=arr[i];
        }
        //only executed if we find a head, otherwise it would be continue'ed before
        int cnt=1;
        int y=head;
        while(a.find(y+1)!=a.end()){
            cnt++;
            y+=1;
        }
        largest= max(largest,cnt);

    }
    
    return largest;
}
int main()
{
    vector<int> a={1,9,3,0,18,5,2,4,10,7,12,6};
    
    int max = largestBand(a);
    cout<<max;
    return 0;
            
}