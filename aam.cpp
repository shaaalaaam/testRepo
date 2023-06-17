#include"bits/stdc++.h"
#include<vector>
#include<set>
#include<queue>
#include<iostream>
using namespace std;

bool check(string str) {
    bool isallcaps=true;
    for(auto&a : str) {
        if(islower(a)) {isallcaps=false;}
    }

    bool firstSmallRestCap=true;
    for(int i=0; i<str.length(); i++) {
        if(i==0) {
            if(isupper(str[i])) firstSmallRestCap=false;}
            else{
                if(islower(str[i])) firstSmallRestCap=false;
            }
    }

    return isallcaps || firstSmallRestCap;
}
void solve() {
    string str;
    cin>>str;

    string res="";
    if(check(str)) {
        for(int i=0; i<str.length(); i++) {
            if(islower(str[i])) str[i]=toupper(str[i]);
            else str[i]=tolower(str[i]);
            res+=str[i];
        }
    } else {
        cout<<str<<endl;
    }



    cout<<res<<endl;
}
int main() {
    int t=1;
    // cin>>t;
    // t+=1;
    while(t--) {
        // cout<<"t "<<t<<endl;
        solve();
    }

    return 0;
}
