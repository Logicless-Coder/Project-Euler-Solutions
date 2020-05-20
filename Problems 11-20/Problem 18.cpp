#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<long int>> v;

    for (int i=1; i<=15; i++) {
        vector<long int> v2;
        for (int j=0; j<i; j++) {
            long int temp;
            cin >> temp;
            v2.emplace_back(temp);
        }
        v.emplace_back(v2);
    }

    for (int i=13; i>=0; i--) {
        for (int j=0; j<i+1; j++) {
            v[i][j] += max(v[i+1][j], v[i+1][j+1]);
        }
    }

    cout << v[0][0] << endl;
    return 0;
}
