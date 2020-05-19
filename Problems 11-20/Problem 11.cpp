#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> v;

    for (int i=0; i<20; i++) {
        vector<int> v2;
        for (int j=0; j<20; j++) {
            int x;
            cin >> x;
            v2.push_back(x);
        }
        v.push_back(v2);
    }

    long maxProduct = 0;

    // ROW
    for (int r=0; r<20; r++) {
        for (int c=0; c<16; c++) {
            int product = v[r][c]*v[r][c+1]*v[r][c+2]*v[r][c+3];
            if (product > maxProduct) {
                maxProduct = product;
            }
        }
    }

    // COLUMN
    for (int c=0; c<20; c++) {
        for (int r=0; r<16; r++) {
            int product = v[r][c]*v[r+1][c]*v[r+2][c]*v[r+3][c];
            if (product > maxProduct) {
                maxProduct = product;
            }
        }
    }

    // DIAGONAL
    for (int r=0; r<16; r++) {
        for (int c=0; c<16; c++) {
            int product = v[r][c]*v[r+1][c+1]*v[r+2][c+2]*v[r+3][c+3];
            if (product > maxProduct) {
                maxProduct = product;
            }
        }
    }

    // 2nd DIAGONAL
    for (int r=0; r<16; r++) {
        for (int c=3; c<20; c++) {
            int product = v[r][c]*v[r+1][c-1]*v[r+2][c-2]*v[r+3][c-3];
            if (product > maxProduct) {
                maxProduct = product;
            }
        }
    }

    cout << maxProduct << endl;

    return 0;
}
