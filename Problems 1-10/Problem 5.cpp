#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>

using namespace std;

int lcm(int n1, int n2) {
  int max = (n1 > n2) ? n1 : n2;
  do
  {
    if (max % n1 == 0 && max % n2 == 0)
    {
        return max;
    }
    else
        ++max;
  } while (true);
}

int main() {
  int n = 20, ans = 1, i = 1;

  while (i <= n) {
    if (ans % i != 0) {
      ans = lcm(ans, i);
    }
    i++;
  }

  cout << ans << endl;

  return 0;
}
