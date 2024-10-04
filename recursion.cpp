#include <bits/stdc++.h>
using namespace std;
#define vi(v, n) vector<int> v(n); for(int i=0; i<n; i++){cin>>v[i];}

vector<vector<int>>valid;
void generate(vector<int> &subset, int i, vector<int>&nums){
    if(i==nums.size()){valid.push_back(subset); return;}
    // ithelementnotinsubset
    generate(subset, i+1, nums);

    // ithelement in
    subset.push_back(nums[i]);
    generate(subset, i+1, nums);
    subset.pop_back();      //backtracking
}
 
 int main(){
    int n;
    cin>>n;
    vi(v,n);
    vector<int> subset;
    generate(subset,0,v);
    for(auto &i: valid){
        for(auto &u:i)cout<<u<<" ";
        cout<<endl;
    }
 }







// vector<string>valid;
// void generate(string &s, int open, int close){
//     if(open==0 && close==0){
//         valid.push_back(s);
//         return;
//     }

//     if(open>0){
//         s.push_back('(');
//         generate(s, open-1, close);
//         s.pop_back();
//     }

//     if(close>0){
//         if(open<close){
//             s.push_back(')');
//             generate(s, open, close-1);
//             s.pop_back();
//         }
//     }
// }

// int main(){
//     int n=0, open=0, close=0; string s;
//     cin>>n;
    
//     open=n, close=n;
//     generate(s, open, close);

//     for(auto &i: valid){
//         cout<<i<<endl;

//     }
// }