#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int C = 1;
    int n0 = 1;

    for (int n = 1; n <= 10; n++) {
        cout << "n = " << n
             << " log2(n) = " << log2(n)
             << " <= " << C * n << endl;
    }

    return 0;
}
