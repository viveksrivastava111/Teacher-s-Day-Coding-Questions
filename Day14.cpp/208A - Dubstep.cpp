#include <iostream>
using namespace std;
int main() {
    string dubstep;
    cin>>dubstep;
    string original;
    // A flag to keep track of whether we are currently in a word
    bool inWord = false;
    for (int i = 0; i < dubstep.length(); i++) {
        // Check if the current position contains the "WUB" phrase
        if (dubstep[i] == 'W' && dubstep[i + 1] == 'U' && dubstep[i + 2] == 'B') {
            // Move the index to skip it
            i += 2;
            // Check if we were previously in a word
            if (inWord) {
                // If so, add a space to separate words
                original.push_back(' ');
                // Update the flag to indicate that we are not in a word anymore
                inWord = false;
            }
        } 
        else {
            // If the current position does not contain "WUB", it is part of a word
            original.push_back(dubstep[i]);
            // Update the flag to indicate that we are in a word
            inWord = true;
        }
    }
    cout<<original<<endl;
    return 0;
}
