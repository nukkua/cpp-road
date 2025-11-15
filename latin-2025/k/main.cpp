#include <bits/stdc++.h>

#define el '\n'

using namespace std;

using ll = long long;
using vll = vector<pair<ll, ll>>;

signed main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n, k; cin >> n >> k;
    vll a(n);
    
    ll maxx = LLONG_MIN, maxy = LLONG_MIN, minx = LLONG_MAX, miny = LLONG_MAX;
    for(auto &[x, y]: a) {
        cin >> x >> y;
        maxx = max(maxx, x);
        maxy = max(maxy, y);
        minx = min(minx, x);
        miny = min(miny, y);
    }
    if (n == 1) {
        cout << 1 << el;
        return 0;
    }
    ll w = maxx - minx + 1;  
    ll h = maxy - miny + 1; 
    
    auto bestTwoKing = [](ll w, ll h, ll k) -> ll {
        if (w >= h) swap(w, h); 
        if (h - w >= k) {
            return (w + k) * h;
        }
        return ((w + h + k) / 2) * ((w + h + k + 1) / 2);
    };
    
    ll bestOneKing = w * h;
    for(auto &[x, y]: a){
        for(auto &[dx, dy]: {make_pair(-k, -k), make_pair(-k, k), 
                            make_pair(k, -k), make_pair(k, k)} ){
            ll nx = x + dx;
            ll ny = y + dy;
            ll wc = max(maxx, nx) - min(minx, nx) + 1;
            ll hc = max(maxy, ny) - min(miny, ny) + 1;
            bestOneKing = max(bestOneKing, wc * hc); 
        }
    }
    cout << max(bestOneKing, bestTwoKing(w, h, k)) << el;
    return 0;
}
