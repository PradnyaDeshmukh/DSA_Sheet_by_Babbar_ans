#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int zero=0;
        int one=0;
        int two=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) zero++;
            else if(a[i]==1) one++;
            else two++;
            
            
        }
        
        int count = 0;
        while(zero>0){
            a[count] = 0;
            zero--;
            count++;
        }
        while(one>0){
            a[count] = 1;
            one--;
            count++;
        }
        while(two>0){
            a[count] = 2;
            two--;
            count++;
        }
        
    }
    
};

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}
