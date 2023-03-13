#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using order_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define ld long double
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define eb emplace_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define summ(a) (accumulate(all(a), 0LL))
#define PI 2 * acos(0)
#define torad(x) (x) * ((2 * acos(0)) / 180.0)
#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(x, a) for (auto& x: a)
#define eps 1e-15
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PQ priority_queue
#define ff first
#define ss second
#define inf 0x3f3f3f3f
const int d4i[4]={-1, 0, 1, 0};
const int d4j[4]={0, 1, 0, -1};
const int d8i[8]={-1, -1, 0, 1, 1, 1, 0, -1};
const int d8j[8]={0, 1, 1, 1, 0, -1, -1, -1};
const int mod = 1e9;
const ll INF = 1e14;
const int mxN = 1e6 + 10;
const int N = 1e3 + 10;
int n,m;
void solve()
{
    int n;
    cin >> n; 
    vector<int>v(n);
    FOR(n){
        cin >> v[i];     
    }
    ll sum = summ(v) >> 1;
    sort(all(v));
    int ans=0,cnt=0;
    while(ans<=sum){
        cnt++;
        ans+=v[n-cnt];
    }
    cout << cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}