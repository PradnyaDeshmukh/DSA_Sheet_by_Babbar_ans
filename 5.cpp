#include<bits/stdc++.h>
using namespace std;

void solution(int arr[],int n){

    int s=0;
    int e=n-1;

    while(s<=e){
        while(arr[s]<0){
            s++;
        }
        while(arr[e]>0){
            e--;
        }
        if(s<e) swap(arr[s],arr[e]);

    }
}

int main(){
    
    int arr[] = {-12, 11, -13, -5,
               6, -7, 5, -3, 11};

    solution(arr,9);

    for(int i=0;i<9;i++) cout<<arr[i];
    return 0;
}