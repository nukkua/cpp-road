#include <bits/stdc++.h>
#define el '\n'

using namespace std;

using vi = vector<int>;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; if(!(cin >> t)) return 0;

    while(t--){
        ll n, a; cin >> n >> a;
        ll cnt_left = 0; ll cnt_right = 0;
        for(int i = 0; i < n; ++i){
            int temp;
            cin >> temp;
            if(temp > a) cnt_left ++;
            else if(temp < a) cnt_right ++;
        }
        cout << (cnt_left > cnt_right ? a + 1 : a - 1) << el;
        
    }
    return 0;

}
