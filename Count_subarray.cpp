/*
    Author :  Error_404_Coder
    Email : mdsojibmiah.coder@gmail.com
    Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        long long res = 0;
        int cnt = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] >= a[i - 1]) {
                cnt++;
            } else {
                res += (cnt * (cnt + 1)) / 2;
                cnt = 1;
            }
        }
        res += (cnt * (cnt + 1)) / 2;
        cout << res << endl;
    }
    return 0;
}
