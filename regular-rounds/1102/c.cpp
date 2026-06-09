#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD 1000000007
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define si set<int>
#define msi multiset<int>
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define repr(i, a, b) for (int i = (a); i >= (b); i--)
#define fore(x, v) for (auto &x : (v))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define mp make_pair
#define newvec(name, n, val) vi name((n), (val))
#define newmat(name, r, c, val) vvi name((r), vi((c), (val)))
#define vin(v, n)                                                              \
  vi v(n);                                                                     \
  rep(_i, 0, n) cin >> v[_i]
#define vmin(m, r, c)                                                          \
  vvi m((r), vi(c));                                                           \
  rep(_i, 0, r) rep(_j, 0, c) cin >> m[_i][_j]
#define vpin(v, n)                                                             \
  vpii v(n);                                                                   \
  rep(_i, 0, n) cin >> v[_i].ff >> v[_i].ss
#define sortv(v) sort(all(v))
#define rsortv(v) sort(rall(v))
#define sortvby(v, cmp) sort((v).begin(), (v).end(), (cmp))
#define maxe(v) *max_element(all(v))
#define mine(v) *min_element(all(v))
#define sumv(v) accumulate(all(v), 0LL)
#define lb(v, x) (int)(lower_bound(all(v), (x)) - (v).begin())
#define ub(v, x) (int)(upper_bound(all(v), (x)) - (v).begin())
#define debarr(a, n)                                                           \
  cout << #a << " : ";                                                         \
  for (int i = 0; i < n; i++)                                                  \
    cerr << a[i] << " ";                                                       \
  cerr << endl;
#define debmat(mat, row, col)                                                  \
  cout << #mat << " :\n";                                                      \
  for (int i = 0; i < row; i++) {                                              \
    for (int j = 0; j < col; j++)                                              \
      cerr << mat[i][j] << " ";                                                \
    cerr << endl;                                                              \
  }
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <class S, class T>
ostream &operator<<(ostream &os, const pair<S, T> &p) {
  return os << "(" << p.first << ", " << p.second << ")";
}
template <class T> ostream &operator<<(ostream &os, const vector<T> &p) {
  os << "[ ";
  for (auto &it : p)
    os << it << " ";
  return os << "]";
}
template <class T> ostream &operator<<(ostream &os, const set<T> &p) {
  os << "[ ";
  for (auto &it : p)
    os << it << " ";
  return os << "]";
}
template <class T> ostream &operator<<(ostream &os, const multiset<T> &p) {
  os << "[ ";
  for (auto &it : p)
    os << it << " ";
  return os << "]";
}
template <class S, class T>
ostream &operator<<(ostream &os, const map<S, T> &p) {
  os << "[ ";
  for (auto &it : p)
    os << it << " ";
  return os << "]";
}
template <class T> ostream &operator<<(ostream &os, const unordered_set<T> &p) {
  os << "[ ";
  for (auto &it : p)
    os << it << " ";
  return os << "]";
}
template <class S, class T>
ostream &operator<<(ostream &os, const unordered_map<S, T> &p) {
  os << "[ ";
  for (auto &it : p)
    os << it << " ";
  return os << "]";
}
template <class T> void dbs(string str, T t) {
  cerr << str << " : " << t << "\n";
}
template <class T, class... S> void dbs(string str, T t, S... s) {
  int idx = str.find(',');
  cerr << str.substr(0, idx) << " : " << t << ",";
  dbs(str.substr(idx + 1), s...);
}
template <class T> void prc(T a, T b) {
  cerr << "[";
  for (T i = a; i != b; ++i) {
    if (i != a)
      cerr << ", ";
    cerr << *i;
  }
  cerr << "]\n";
}
int binpow(int b, int p, int mod) {
  int ans = 1;
  b %= mod;
  for (; p; p >>= 1) {
    if (p & 1)
      ans = ans * b % mod;
    b = b * b % mod;
  }
  return ans;
}
void solve() {
  int n;
  cin >> n;
  vi h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }

  vi ans(n);

  for (int ei = 0; ei < n; ei++) {
    vi P(n);
    for (int j = 0; j < n; j++) {
      P[j] = h[(ei + j) % n];
    }

    vi pref(n);
    int cmax = 0;
    for (int j = 0; j < n; j++) {
      cmax = max(cmax, P[j]);
      pref[j] = cmax;
    }

    vi suff(n);
    cmax = 0;
    for (int j = n - 1; j >= 0; j--) {
      cmax = max(cmax, P[j]);
      suff[j] = cmax;
    }

    int total = 0;

    for (int k = 1; k < n; k++) {
      total += min(pref[k - 1], suff[k]);
    }

    ans[ei] = total;
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << ' ';
  }
  cout << '\n';
}
int32_t main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}