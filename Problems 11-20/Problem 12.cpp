#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int numberOfDivisors(long long x) {
    int ans = 2;
    for (long long i=2; i<sqrt(x)+1; i++) {
        if (x%i == 0) {
            ans += 2;
        }
        if (sqrt(x)*sqrt(x) == x) {
            ans--;
        }
    }
    return ans;
}

int main() {
    int num = 500;
    int n = 1;
    int x = n*(n+1)/2;
    int y = numberOfDivisors(x);

    while (y <= 500) {
        n++;
        x = n*(n+1)/2;
        y = numberOfDivisors(x);
        cout << n << " " << x << " " << y << endl;
    }

    cout << x << endl;

    return 0;
}
