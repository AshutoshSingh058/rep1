#include<bits/stdc++.h>
using namespace std;
#define vi(v, n) vector<int> v(n); for(int i=0; i<n; i++){cin>>v[i];}

int main(){
    int s=0,n=0,c=0; cin>>n>>c;
    vi(v,n);
    for(int i=0; i<n; i++){
        s+=v[i];
    }
    int q=0; cin>>q;
    int l=0, h=c, m=0, y=0;
    while(h-l>1){
        m=(h+l)/2;
        if(v[m]<q)l=m;
        else h=m-1;

    }

    if(v[h]==q)cout<<h<<endl;
    else if(v[l]==q)cout<<l<<endl;
    else cout<<" NO"<<endl;
}