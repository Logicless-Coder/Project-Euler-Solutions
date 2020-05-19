#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    long long x = 2000000;
    long long int ans = 0;

    // Sieve of Eratosthenes
    long long y = sqrt(x);
    vector<bool> v(x+1, true);

    for (long long i=2; i<=y; i++) {
        if (v[i]) {
            for (long long j=i*i; j<=x; j+=i) {
                v[j] = false;
            }
        }
    }

    for (long long k=2; k<=x; k++) {
        if (v[k]) {
            ans += k;
        }
    }

    cout << ans << endl;

    return 0;
}
