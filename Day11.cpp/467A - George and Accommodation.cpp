#include <iostream>

using namespace std;

int main() {
    int n, a, q;
    int cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> q;
        if (q - a >= 2) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
