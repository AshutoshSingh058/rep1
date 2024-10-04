
#include <bits/stdc++.h>
using namespace std;

int main() {
    (ios_base:: sync_with_stdio(false),cin.tie(NULL));
    #ifndef ONLINE_JUDGE   //if online judge is not defined
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif
    vector<int> setA = {1, 3, 4, 5, 7};
    vector<int> setB = {2, 3, 5, 6};
    for (auto i: setA){
        cout<<i<<" ";
    }
    cout<<endl;
    for (auto i: setB){
        cout<<i<<" ";
    }
    
    cout<<100000004<<endl;
    return 0;
}
