#include <iostream>
using namespace std;
 
int main() {
    string str;
    while (cin >> str) {
        bool removed = false;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == '0') {
                str.erase(str.begin() + i);
                removed = true;
                break;
            }
        }
        if (!removed) str.erase(str.begin());
        cout << str << '\n';
    }
    return 0;
}
