#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

long long pythagoreanTriplets(int limit)
{

	int a, b, c = 0;

	int m = 2;

	while (c < limit) {

		for (int n = 1; n < m; ++n) {
			a = m * m - n * n;
			b = 2 * m * n;
			c = m * m + n * n;

			if (c > limit)
				break;

			if (a + b + c == 1000) {
				long long ans = a*b*c;
				return ans;
			}
		}
		m++;
	}
}

int main()
{
	int limit = 1000;
	cout << pythagoreanTriplets(limit) << endl;
	return 0;
}
