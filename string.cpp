#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, i=0;
    cin>>n;
    cin.ignore();
    string str, s;
    s=s.erase(i,2);
    vector <string> v;
    for(int i=0; i<n; i++){
        getline(cin, str);
        reverse(str.begin(), str.end());
        v.push_back(str);
    }

    for(auto i: v){
        cout<<i<<"\n";
    }
    
}
