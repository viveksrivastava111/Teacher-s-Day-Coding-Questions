#include <iostream>
#include <string>
#include <cmath> // Include cmath for the abs() function

using namespace std;

int main()
{
    string S;
    cin >> S;

    int now = 0, ans = 0;
    for (int i = 0; i < S.length(); ++i)
    {
        int target = S[i] - 'a'; // Get the numerical position of the current letter
        int diff = abs(target - now); // Calculate the absolute difference
        
        // Add the minimum of the two possible rotation distances
        ans += min(diff, 26 - diff);
        
        now = target; // Update the current position to the new letter
    }

    cout << ans << endl;

    return 0;
}
