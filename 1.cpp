#include<bits/stdc++.h>
using namespace std;

/* python code
print(a[::-1])
*/
void reverse_recursion(int a[], int start, int end){
    if(start>=end) return;
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;

    reverse_recursion(a,start+1,end-1);
}
void reverse_iteration(int a[]){
    int start=0, end=9;
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
int main(){

    int a[10] = {4,2,6,1,8,0,3,5,9,10};
    

    reverse_recursion(a,0,9);
    // reverse_iteration(a);
    for(int i=0;i<=9;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}