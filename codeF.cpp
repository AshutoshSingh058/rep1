#include<bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define endl "\n"
#define int long long
#define ld long double
#define ull unsigned long long
#define vi(v, n) vector<int> v(n); for(int i=0; i<n; i++){cin>>v[i];}
#define pb(e) push_back(e)
#define sv(a) sort(a.begin(),a.end())
#define svr(a) sort(a.begin(),a.end(), greater<int>())
#define sa(a,n) sort(a,a+n)
#define mk(a,b) make_pair(a,b)
#define all(x) x.begin(),x.end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/(__gcd(a,b)))*b
#define d2b(a,b) a=bitset<32>(b).to_string();
#define r(s) reverse(s.begin(), s.end());
#define debug(x) cout<<#x<<" "<<x<<endl;
#define ff first
#define ss second
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) {
    return (a.second < b.second);
}
void print(vector<int> v) {
    int n = v.size();
    for (auto i : v) cout << i << " ";
    cout << endl;
}

const long long  N = 1e9 + 7;


signed main() {
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "rt", stdin);

    // for writting output from output.txt
    freopen("output.txt", "wt", stdout);
#endif

    fastread();
    int tc = 1, q = 0, w = 0, e = 0;
    cin >> tc;
    while (tc--) {
        int  a = 1, b = 0, c = 0, d = 9, h = 0,  k = 0;
        int x = 0, y = 0, z = 0, m = 0, n = 0, l = 0, r = 0;
        int sum = 0, p = 1, ct = 0, cnt = 0;
        bool flag = false, ck = false;
        string  s, st = "", str ; char ch;
        set <int> s1, s2;
        stack <int> s3;
        map<int, int> mp;
        // map<int, int> mp2;

        cin >> k;
        l = 0, r = 2e18;
        while (l <= r) {
            n = (l + r) / 2;
            if (n - (int)sqrtl(n) >= k) {
                b = n; r = n - 1;
            }
            else l = n + 1;
        }
        // n = k + (int)(sqrtl(k) + 0.5);
        cout << b << endl;

    }
    return 0;
}

