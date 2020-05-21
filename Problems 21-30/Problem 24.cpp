#include <bits/stdc++.h>
#include <chrono>

using namespace std;

int main() {
    string str = "0123456789";
    long pos = 999999;

    while (pos--) {
        next_permutation(str.begin(), str.end());
    }

    cout << str << endl;
    return 0;
}
