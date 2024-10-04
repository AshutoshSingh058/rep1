#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define endl "\n"
using namespace std;
#define int long long
#define ld long double
#define ull unsigned long long
#define vi(v, n) vector<int> v(n); for(int i=0; i<n; i++){cin>>v[i];}
#define pb(e) push_back(e)
#define sv(a) sort(a.begin(),a.end())
#define svr(a) sort(a.begin(),a.end(), greater<INT>)
#define sa(a,n) sort(a,a+n)
#define mp(a,b) make_pair(a,b)
#define all(x) x.begin(),x.end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/(__gcd(a,b)))*b
#define d2b(a,b) a=bitset<19>(b).to_string();
#define r(s) reverse(s.begin(), s.end());
#define debug(x) cout<<#x<<" "<<x<<endl;
#define ff first
#define ss second
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define intmax INT_MAX
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) {
    return (a.second < b.second);
}

void print(vector<int> v) {
    for (auto i : v) cout << i << " ";
    cout << endl;
}
void print(set<int > v) {
    for (auto i : v) cout << i << " ";
    cout << endl;
}
void print(multiset<int > v) {
    for (auto i : v) cout << i << " ";
    cout << endl;
}
void print(map<int, int > v) {
    for (auto i : v) cout << i.ff << " " << i.ss << endl;;
}
bool prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

void printBinary(int n) {
    bitset<32> binary(n);
    cout << binary.to_string() << endl;
}

int mex(vector<int> &v) {
    sort(all(v));
    int mex = 0;
    for (int n : v) {
        if (n == mex) mex++;
    }
    return mex;
}

const int dx[8] = {0, 1, 0, -1, 1, 1, -1, -1};
const int dy[8] = {1, 0, -1, 0, 1, -1, 1, -1};


const int  N = 10e9 + 7;

void sieve(int n) {

    // O(N loglog N)


    bool primes[n + 1];
    fill(primes, primes + n + 1, true);

    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (primes[i])
            for (int j = i * i; j <= n; j += i) primes[j] = false;

    }
}



// prime vector
// vector<int> v;
// v.pb(1), v.pb(2);
// for(int i=3; i<50000; i++){
//     for(int j=1; j<v.size(); j++){
//         if(i%v[j]==0){w=1; break;}
//     }
//     if(w==0)v.pb(i);
//     else w=0;
// }
// print(v);

signed main() {
    fastread();
    int tc = 0, q = 0, w = 0, e = 0;
    cin >> tc;
    while (tc--) {
        int a = 0, b = intmax, c = 0, d = 0, x = 0, y = 0, z = 0, m = intmax, n = 0, k = 0, t = 0, l = 0, r = 0;
        int sum = 0, p = 1, ct = 2, cnt = 0, ar = 0;
        string  s, st, str;
        set <int> s1;
        stack <int> s2;
        map <int, int> mp;



    }
}






// i, j,k,u iterators
// q,w,e, outer variables;
// a,b,c,d,x,y,m,n,l,r inner vrables
// sum, p, ct, count defined
// s string
// possible vectors v, f,g,h,z
// possible set st,st1,st2
// new things use 2char definition

/*

#define out(x) cout<<#x<<" -> "<<x<<endl;
#define forn(a, c) for (int (a) = 0; (a) < (c); (a)++)
#define forl(a, b, c) for (int (a )= (b); (a) <= (c); (a)++)
#define forr(a, b, c) for (int (a) = (b); (a) >= (c); (a)--)
#define cin(v) for(auto &i:v){cin>>i;}
#define cout(v) for(auto &i:v){cout<<i<<" ";}cout<<nl;
#define coutpr(v) for(auto &i:v){cout<<i.first<<" -> "<<i.second<<nl;}cout<<nl;
#define coutmp(v) for(auto &x:v){cout<<x.first<<" -> "<<x.second<<nl;}cout<<nl;
#define super() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define print(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); pri(_it, args); }
void pri(istream_iterator<string> it) {}
template<typename T, typename... Args>
void pri(istream_iterator<string> it, T a, Args... args) {
    cout << *it << " = " << a << endl;
    pri(++it, args...);
}
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}
string dtobin(int n,int k = 0)
{
    string res = "";
    while(n>0 || k>0){k--;if(n&1){res += "1";}else{res += "0";}n>>= 1;}reverse(res.begin(),res.end());return res;
}
int binexp(int a,int b)
{
    if(b==0){return 1;}int res = 1;
    while(b){if(b&1){res*= a;}b>>=1; a *= a;}return res;
}
void setbit(int i,int &x){
    x |= ((int)1<<i);
}
bool bitv(int i,int x){
    return (((int)1<<i)&x);
}
vector<int> vinput(int n){
    vector<int> v(n);cin(v); return v;
}
bool doit(int &x,int &y,int &k){
    // print(x,y,k);
    if(x < y){
        int b =y-x;
        if(b > k){

            cout<<x+k<<nl;
        }
        else if(b == k){
            cout<<1<<nl;
        }
        else{
            k -= b;
            k %= (y-1);
            k++;
            while((k % y) == 0)k/= y;
            cout<<k<<nl;
        }
        return 1;
    }
    int ub = (x+y-1)/y;ub *= y;
    if(ub == x)ub+= y;
    int a = ub-x;
    if(k < a){
        x += k;while(x%y == 0)x/= y;
        cout<<x<<nl;return 1;
    }
    else if(k == a){
        x += k;while((x%y) == 0)x/= y;
        cout<<x<<nl;return 1;
    }
    else{
        k-= a;
        x = ub;
        while((x%y) == 0)(x/= y);
        return 0;
    }
}

*/

// #define eb emplace_back
// #define lb lower_bound
// #define ub upper_bound
// #define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
// clock_t startTime;
// double getCurrentTime() {
//  return (double)(clock() - startTime) / CLOCKS_PER_SEC;
// }
// void err(istream_iterator<string> it) {}
// template<typename T, typename... Args>
// void err(istream_iterator<string> it, T a, Args... args) {
//  cerr << *it << " = " << a << endl;
//  err(++it, args...);
// }
// int lcm(int a,int b){
//     return a*(b/(__gcd(a,b)));
// }
// bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
//     return (a.second < b.second);
// }
// bool cmp(const pair<int,int> &a, const pair<int,int> &b){
//     if(a.ss!=b.ss) return a.ss<b.ss;
//     return a.ff<b.ff;
// }


// string bin(int num)
// {
//     string str;
//       while(num){
//       if(num & 1) // 1
//         str+='1';
//       else // 0
//         str+='0';
//       num>>=1; // Right Shift by 1
//     }
//     reverse(all(str));
//     return str;
// }
// int dis(int a,int b,int c,int d) {
//     return((a-c)*(a-c)+(b-d)*(b-d));
// }
// int fact(int n){
//     if(n==1) return 1;
//     int a=1,md=1e9+7;
//     while(n>0){
//         a=(a*n)%md;
//         n--;
//     }
//     return a;
// }
// int mex(map<int,int> &mp){
//     int n=mp.size();
//     for(int i=0;i<=n;i++){
//         if(mp[i]==0) return i;
//     }
// }

// int pw(int a,int b){
//     int ans=1;
//     while(b--){
//         ans*=a;
//     }
//     return ans;
// }
// int isSubstring(string s1, string s2)
// {
//     // using find method to check if s1 is
//     // a substring of s2
//     if (s2.find(s1) != string::npos)
//         return s2.find(s1);
//     return -1;
// }

// void fun(int i,vector<int> v,vector<int> candidates,vector<vector<int>>& ans,int sum, int target){
//     if(i>=candidates.size()){
//         if(sum==target) {
//             ans.push_back(v);
//             return;
//         }
//         return;
//     }
//     v.push_back(candidates[i]);
//     sum+=candidates[i];
//     fun(i+1,v,candidates, ans,sum,target);
//     v.pop_back();
//     sum-=candidates[i];
//     fun(i+1,v,candidates, ans,sum,target);

// }
// int binexp(int a,int b){
//     const int mod = 1e9 + 7;
//     if(b==0) return 1;
//     int res=binexp(a,b/2);
//     if(b&1) return (a*((res*res)%mod))%mod;
//     else return (res*res)%mod;
// }
// int  fo(int i,int &sum,int &k,vector<int> &v){
//     if(i==v.size()){
//         if(sum==k) return 1;
//         return 0;
//     }
//     sum+=v[i];
//     int a=fo(i+1,sum,k,v);
//     sum-=v[i];
//     int b=fo(i+1,sum,k,v);
//     return a+b;
// }
// int fib(int n,vector<int> v){
//     if(n<=1) return n;
//     if(v[n]!=-1) return v[n];
//     return v[n]=fib(n-1,v)+fib(n-2,v);
// }
// bool f(int i,int k,vector<int> &arr, vector<vector<int>> &dp){
//     error(i,k);
//     if(k==0) return true;
//     if(i==0) return (arr[0]==k);
//     error(i,k,dp[i][k]);
//     if(dp[i][k]!=-1) return dp[i][k];

//     bool ntake=f(i-1,k,arr,dp);
//     bool take=false;
//     if(k>=arr[i]){
//         take=f(i-1,k-arr[i],arr,dp);
//     }
//     dp[i][k]=(ntake || take);
//     error(i,k,dp[i][k]);
//     return dp[i][k];
// }
// int ces(int i,int &sum,int ans,int &mn,vector<int>&v){
//     if(i==v.size()){
//         mn=min(mn,abs(sum-2*ans));
//         return mn;
//     }
//     ans+=v[i];
//     ces(i+1,sum,ans,mn,v);
//     ans-=v[i];
//     ces(i+1,sum,ans,mn,v);
//     return mn;
// }


/*


#include<bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(),a.end()
#define nl "\n"
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define debug(x) cout<<#x<<" "<<x<<nl;
#define ff first
#define ss second
#define pb push_back
#define lcm(a,b) a*(b/__gcd(a,b))
#define cout(v) for(auto &i:v){cout<<i<<" ";}cout<<nl;
#define coutp(v) for(auto &i:v){cout<<i.ff<<"->"<<i.ss<<nl;}cout<<nl;
#define coutv(v) for(auto &i:v){for(auto &j:i){cout<<j<<" ";}}cout<<nl;
#define coutmp(v) for(auto &x:v){cout<<x.ff<<"->"<<x.ss<<nl;}cout<<nl;

bool cmp(const pair<int,int> &a, const pair<int,int> &b){
    if(a.ff!=b.ff) return a.ff<b.ff;
    else return a.ss<b.ss;
    // return a.ss<b.ss;
}

bool isprime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int pw(int a, int b){
    if (b == 0)
        return 1;
    int x = a;
    b--;
    while (b--){
        a *= x;
    }
    return a;
}

string bin(int num){
    string str;
    while (num){
        if (num & 1)
            str += '1';
        else
            str += '0';
        num >>= 1;
    }
    reverse(all(str));
    return str;
}

string bin(int num, int sz){
    string str;
    while (num || sz > 0){
        if (num & 1)
            str += '1';
        else
            str += '0';
        num >>= 1;
        sz--;
    }
    reverse(all(str));
    return str;
}

int bdec(string binary){
    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; i--){
        decimal += (binary[i] - '0') * base;
        base *= 2;
    }
    return decimal;
}

const int kk=300005;
// bitset<kk> prm(0);
void seive(bitset<kk> &prm){
    prm[1]=1; prm[0]=1;
    for(int i=2; i<sqrt(kk)+1; ++i){
        if(prm[i]==0){
            for(int j=i*i; j<kk; j+=i){
                prm[j]=1;
            }
        }
    }
}

*/