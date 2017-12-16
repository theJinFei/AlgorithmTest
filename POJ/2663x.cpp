//T(n) = T(2)¡ÁT(n-2) + 2(T(n-4) + T(n-6) + ... + T(2)) + 2
#include <iostream>
using namespace std;
const int N = 32;
int main()
{
    int n;
    while (cin >> n) {
        long m[N];
        m[0] = 1;
        m[2] = 3;
        if (n == -1) {
            break;
        }
        if (n % 2 == 1) {
            cout << 0 << endl;
        } else {
            for (int i = 4; i <= n; i+= 2) {
                m[i] = m[i - 2] * m[2];
                for (int j = i - 4; j >= 0; j -= 2) {
                    m[i] += 2 * m[j];
                }
            }
            cout << m[n] << endl;
        }
    }
    return 0;
}

