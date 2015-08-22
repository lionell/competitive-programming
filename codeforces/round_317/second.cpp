//
// Created by lionell on 8/22/15.
// Copyright (c) 2015 Ruslan Sakevych. All rights reserved.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/cp/codeforces/round_317/in.txt");
#endif

//region Template
#define endl                    "\n"
#define eb                      emplace_back
#define pb                      push_back
#define ppb                     pop_back
#define fs                      first
#define sd                      second
#define all(x)                  begin(x), end(x)
#define sz(x)                   (int)((x).size())
#define len(x)                  (int)((x).length())
#define set(x, y)               fill(all(x), y)
#define mset(x, y)              memset(x, y, sizeof(x))

#define _                       ios_base::sync_with_stdio(false); cin.tie(0);
#define debug(x)                cout << #x << "=" << x << "\n"
#define rep(i, begin, end)      for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

typedef complex<double> cd;

typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair <ll, ll> pll;

typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector <string> vs;
typedef vector <ll> vl;

typedef vector <pii> vii;
typedef vector <pll> vll;
typedef vector <pdd> vdd;

typedef vector <vi> vvi;
typedef vector <vl> vvl;

typedef queue<int> qi;
typedef queue <ll> ql;
typedef queue <pii> qii;
typedef queue <pll> qll;

const double EPS = 1e-7;
const int MOD = 10000007;
const int INF = (int) 1e9;

template<typename T>
inline void print(const vector <T> &a) { for (auto x: a) cout << x << " "; }

template<typename T>
inline void smin(T &a, T b) { if (a > b) a = b; }

template<typename T>
inline void smax(T &a, T b) { if (a < b) a = b; }

template<typename T>
inline T sqr(T a) { return a * a; }

template<typename T>
inline T gcd(T a, T b) {
    while (b > 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

template<typename T>
inline T lcm(T a, T b) { return a / gcd(a, b) * b; }

template<typename T>
inline T qpow(T a, T b) {
    T r = 1;
    while (b > 0) {
        if (b & 1) r *= a;
        a *= a;
        b >>= 1;
    }
    return r;
}

template<typename T>
inline T qpom(T a, T b, T mod = MOD) {
    T r = 1;
    while (b > 0) {
        if (b & 1) r = r * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return r;
}
//endregion

int main() {_
    int n = 0, k = 0;
    cin >> n >> k;
    map<int, int> b, s;
    for (int i = 0; i < n; ++i) {
        char ch = 0;
        int d = 0, p = 0;
        cin >> ch >> d >> p;
        if (ch == 'B') {
            b[-d] += p;
        } else {
            s[d] += p;
        }
    }
    int j = k;
    vii ans;
    for (auto item : s) {
        ans.pb(item);
        --j;
        if (j == 0) break;
    }
    for (int i = sz(ans) - 1; i >= 0; --i) {
        cout << "S " << ans[i].first << " " << ans[i].second << endl;
    }
    j = k;
    for (auto item : b) {
        cout << "B " << -item.first << " " << item.second << endl;
        --j;
        if (j == 0) break;
    }
    return 0;
}