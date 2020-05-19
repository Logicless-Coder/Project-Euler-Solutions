#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>

using namespace std;

bool isPrime(long long x) {
  long long i;
  for (i=2; i<x; i++) {
    if (x%i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n = 10001, i = 1;
  long long ans = 3;

  while (i < n) {
    if (isPrime(ans)) {
      i++;
    }
    ans += 2;
  }

  cout << ans-2 << endl;

  return 0;
}
