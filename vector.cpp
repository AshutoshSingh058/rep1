#include <bits/stdc++.h>
#define ll long long
#define rall(x) x.rbegin(),x.rend()
using namespace std;

int main(){
    // vector<int> arr;
//     vector <int> arr1{19,20,21};
//     vector <int> arr2(10,-1);
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     arr.push_back(7);
//     arr.push_back(5);
//     arr.pop_back();
//     arr.size();
//     arr.capacity();
//     arr.empty();
//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
// default value 0 set    
    
//     // find unique elements
//     // xor operator ^   ans=ans^arr[i]
//     int a = 0;
//     int b = 2;
//    cout<<(a^b);

        // vector <vector<int>> a(3,vector<int>(5, 0));
        // //outer vector(a) 3 rows inner v 5 cols 0 def value
        // cout<<a[0][3];
        // cin>>a[2][4];
        // a[i].size();

    // for(auto val: arr){
    //     cout<<val;
    // }

    int n=0;
    cin>>n;
    vector<int> v;
    for(int i=1; i<=n; i++){
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());

    // v.pop_back();
    // v.pop_back();
    // cout<<v.size()<<" "<<v.capacity()<<" ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    int min= *min_element(v.begin(), v.end());
    int max= *max_element(v.begin(), v.end());
    int sum= accumulate(v.begin(), v.end(), 0);
    int ct=count(v.begin(), v.end(), 2);
    auto it=find(v.begin(), v.end(), 2);     // if it==v.end() 2 not present
    reverse(v.begin(), v.end());

    // lambda function
    auto sm= [](int x, int y){return x+y;};
    cout<<sm(2,3);
    
}


