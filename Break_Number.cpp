#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long x, max_f = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        int f = 0;
        
        while (x % 2 == 0) {
            x /= 2;
            f++;
        }

        auto placeholder = max;
        max_f = placeholder(max_f, f);
    }
    
    cout << max_f << endl;
    
    return 0;
}
