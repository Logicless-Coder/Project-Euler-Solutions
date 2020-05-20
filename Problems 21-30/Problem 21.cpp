#include <bits/stdc++.h>
#include <chrono>

using namespace std;

int d(int x) {
    int sum = 0;
    for (int i=1; i<x; i++) {
        if (x%i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    auto start = chrono::high_resolution_clock::now();

    int n = 10000;
    long long ans = 0;
    vector<int> seen;
    for (int i=1; i<n; i++) {
        int j = d(i);
        auto it = find(seen.begin(), seen.end(), i);
        if (d(j) == i && i != j) {
            if (it == seen.end()) {
                ans += i;
                seen.emplace_back(i);
            }
        }
    }

    cout << ans << endl;

    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << duration.count() << "ms" << endl;
    return 0;
}
