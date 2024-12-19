/*
    Author :  Error_404_Coder
    Email : mdsojibmiah.coder@gmail.com
    Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
*/
#include<bits/stdc++.h>
using namespace std;

int countDivisibleBy2(long long x) {
    int count = 0;
    while (x % 2 == 0) {
        x /= 2;
        count++;
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    vector<long long> numbers(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    int maxCount = 0;
    for (int i = 0; i < N; i++) {
        maxCount = max(maxCount, countDivisibleBy2(numbers[i]));
    }
    cout << maxCount << endl;
    return 0;
}
