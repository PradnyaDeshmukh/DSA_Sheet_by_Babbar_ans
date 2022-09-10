#include<bits/stdc++.h>
using namespace std;


vector<int> unionArray(vector<int> A, vector<int> B){


    set<int> s;

    for(int i=0;i<A.size();i++){
        s.insert(A[i]);
    }

    for(int i=0;i<B.size();i++){
        if(s.count(B[i])==0) s.insert(B[i]);
    }
    
    vector<int> ans(s.begin(),s.end());

    return ans;
    
}

vector<int> intersectionArray(vector<int> A, vector<int> B){

    unordered_map<int,int> mp;

    int a = A.size();
    int b = B.size();

    for(int i=0;i<a;i++){
        mp[A[i]] = i;
    }

    vector<int> ans;

    for(int i=0;i<b;i++){
        if(mp.find(B[i])!=mp.end()) ans.push_back(B[i]);
    }

    return ans;
}

int main(){
    
    vector<int> A = {1,2,3,4,5};
    vector<int> B = {1,2,3,6};

    vector<int> ans = unionArray(A,B);
    vector<int> ans1 = intersectionArray(A,B);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    for(int i=0;i<ans1.size();i++){
        cout<<ans1[i];
    }

    return 0;
}