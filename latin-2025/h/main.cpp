#include <bits/stdc++.h>
using namespace std;

#define el '\n'

using vi = vector<int>;

signed main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; if(!(cin >> n)) return 0;
    vi a(n); for(auto &x: a) cin >> x;

    int days = 1;
    int maxi = INT_MIN;

    for(int i = 1; i < n; ++i){
        maxi = max(maxi, a[i - 1]);
        if(a[i - 1] < a[i]) {
            if(a[i] > maxi){
                maxi = max(maxi, a[i]);
                days++;
            }
        } 
    }
    cout << days << el;



    return 0;
}
