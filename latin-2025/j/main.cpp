#include <bits/stdc++.h>

using namespace std;
#define el '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s; cin >> s;
    map<string, int> dict = {{"ha", 1}, {"boooo",-1 }, {"bravo", 3}};


    int cnt = 0;
    for(const auto& [key, value]: dict){
        size_t pos = 0; 
        while((pos = s.find(key, pos)) != string::npos) {
            cnt += value;
            pos++;
        }
    }


    cout << cnt << el;

    return 0;
}
