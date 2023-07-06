#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ull unsigned long long
#define FOR(i,x,n) for(int i = x; i<=n; i++)
#define FORO(i,n) for(int i = 0; i<n; i++)
#define ROF(i,x,n) for(int i = x; i>=n; i--)
#define nl "\n"
#define sp " "
#define INF 1000000000000000000
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
#define pb push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define pi pair<int, int>
#define pl pair<ll, ll>
#define pp pair<pair<int,int>,int>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int> >
#define vvl vector<vector<ll> >
#define vpi vector<pair<int, int> >
#define vpl vector<pair<ll, ll> >
#define PQ priority_queue
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define CASE int t;cin>>t; FOR(i,1,t)
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007
#define MOD2 765576143

int main() {
    ll n, p;
    cin >> n >> p;

    vl vec(n);
    ordered_set techgig;
    map<ll, ll> mp;
    FORO(i, n) {
        cin >> vec[i];
        if (mp[vec[i]] == 0) {
            techgig.insert(vec[i]);
            mp[vec[i]] = 1;
        }
    }

    vl tele(p);
    FORO(i, p) {
        int x;
        cin >> x;

        if (mp[x] == 0) {
            techgig.insert(x);
            mp[x] = 1;
        }
        cout << techgig.size() - techgig.order_of_key(x) << endl;
    }

    return 0;
}
