#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pii pair<int, int>
#define pli pair<ll, int>
#define pil pair<int, ll>
#define pll pair<ll, ll>
#define msl map<string, ll>
#define mll map<ll, ll>
#define mls map<ll, string>
#define mss map<string, string>
#define sll set<ll>
#define mp make_pair
#define pb push_back
#define popb pop_back
#define sort(v) sort(v.begin(), v.end())
#define reverse(v) reverse(v.begin(), v.end())
#define count(v, p) count(v.begin(), v.end(), p)
#define all(v) v.begin(), v.end()
#define popcount __builtin_popcount
#define clz __builtin_clz
#define ctz __builtin_ctz
#define parity __builtin_parity
#define gcd __gcd
#define elif else if
#define ub upper_bound
#define lb lower_bound
#define print(v)                       \
    for (int i = 0; i < v.size(); i++) \
        cout << v[i] << " ";           \
    cout << endl;
#define test  \
    int t;    \
    cin >> t; \
    for (int i = 1; i <= t; i++)
#define test1  \
    int t = 1; \
    while (t--)
#define boost_my_code                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define after(x) cout << fixed << setprecision(x)
#define MOD 1000000007
#define mod 998244353
#define INF 1 << 30
#define mem0(arr) memset(arr, 0, sizeof(arr));
#define mem1(arr) memset(arr, -1, sizeof(arr));
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define nl printf("\n");

/*
====================================End Of Macros====================================================================================================================================
*/
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
/*
=======================================End Of Typedefs=================================================================================================================================
*/

// Function Definitions

ll lcm(ll x, ll y) { return (x * y) / gcd(x, y); }

void dbg(string s) { cout << s << endl; }

bool isPalindrome(string::iterator low, string::iterator high)
{
    while (low < high)
    {
        if (*low != *high)
            return false;
        low++;
        high--;
    }
    return true;
}

ll bigmod(ll a, ll b, ll prime)
{
    ll res = 1;
    a = a % prime;
    if (b == 0)
        return res;
    else if (b == 1)
        return a;
    else
    {
        if (b % 2 == 0)
        {
            res = bigmod(a, b / 2, prime);
            res %= prime;
            res = (res * res) % prime;
        }
        else
        {
            res = a % prime;
            res = (res * bigmod(a, b - 1, prime) % prime) % prime;
        }
    }
    return res;
}

int countStrictlySmaller(const vector<ll> &vec, ll value)
{
    return lower_bound(vec.begin(), vec.end(), value) - vec.begin();
}

int countEqualOrSmaller(const vector<ll> &vec, ll value)
{
    return upper_bound(vec.begin(), vec.end(), value) - vec.begin();
}

int countStrictlyLarger(const vector<ll> &vec, ll value)
{
    return vec.end() - upper_bound(vec.begin(), vec.end(), value);
}

int countEqualOrLarger(const vector<ll> &vec, ll value)
{
    return vec.end() - lower_bound(vec.begin(), vec.end(), value);
}

bool existsInVector(const vector<ll> &vec, ll value)
{
    auto it = lower_bound(vec.begin(), vec.end(), value);
    return it != vec.end() && *it == value;
}

int countInRangeInclusive(const vector<ll> &vec, ll l, ll r)
{
    auto lower = lower_bound(vec.begin(), vec.end(), l);
    auto upper = upper_bound(vec.begin(), vec.end(), r);
    return upper - lower;
}

ll max(ll a, ll b)
{
    if (a > b)
        return a;
    return b;
}

ll min(ll a, ll b)
{
    if (a < b)
        return a;
    return b;
}

void solve();

int main()
{
    boost_my_code;
#ifndef ONLINE_JUDGE
    READ("in.txt");
    WRITE("out.txt");
#endif // ONLINE_JUDGE
    test1 { solve(); }
    return 0;
}

void solve()
{
    // dbg("--------------------");
}
