#include <bits/stdc++.h>

using namespace std;

int main() {
    int res = 1;
    for (int i = 0; i < 20; ++i) {
       res = res * (40-i) / (i+1);
    }

    cout << res << endl;
    return 0;
}
