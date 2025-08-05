#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n; // quantity of the stones
    string colors;
    cin >> colors; // colors of the stones

    int removed_stones = 0;

    // We go through all the stones starting from the second one
    for (int i = 1; i < n; ++i) {
        // If the current stone has the same color as the previous one
        if (colors[i] == colors[i - 1]) {
            // If the current stone has the same color as the previous one
            removed_stones++;
        }
    }

    // We output the number of removed stones
    cout << removed_stones << endl;

    return 0;
}
