#include <bits/stdc++.h>

#define el '\n'

using namespace std;
using vi = vector<int>;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t; if(!(cin >> t)) return 0;
    while(t--){
        int n; cin >> n;
        ll a; cin >> a;
        vi v(n); for(int i = 0; i < n; ++i) cin >> v[i];

        ll b_right = a + 1;
        int cnt_right = n - int(lower_bound(v.begin(), v.end(), b_right) - v.begin());

        ll b_left = (a == 0 ? 0 : a - 1);
        int cnt_left = int(lower_bound(v.begin(), v.end(), a) - v.begin());

        cout << cnt_left << " " << cnt_right << el;
    }

    return 0;
}
