#include<bits/stdc++.h>
using namespace std;


int kthSmallest(int arr[], int l, int r, int k) {
        
        int n = r+1;
 
        priority_queue<int, vector<int>> pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        int pops=n-k;
        for(int i=1;i<=pops;i++){
            // cout<<pq.top();
            pq.pop();
        }
        return pq.top();
}
int kthMax(int arr[], int l, int r, int k) {
        
        int n = r+1;
 
        priority_queue<int, vector<int>> pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        int pops=k-1;
        for(int i=1;i<=pops;i++){
            // cout<<pq.top();
            pq.pop();
        }
        return pq.top();
}

int main(){
    
    int arr[6] = {7,10,4,3,20,15};

    cout<<kthSmallest(arr,0,5,3);
    cout<<kthMax(arr,0,5,3);


    return 0;
}