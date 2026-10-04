#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word1, word2;
    cout << "Enter two words: ";
    cin >> word1 >> word2;

    // Store original words for the final message
    string orig1 = word1;
    string orig2 = word2;

    // Sort both words
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    // If sorted words are identical, they are anagrams
    if (word1 == word2) {
        cout << "\"" << orig1 << "\" and \"" << orig2 << "\" are anagrams." << endl;
    } else {
        cout << "\"" << orig1 << "\" and \"" << orig2 << "\" are NOT anagrams." << endl;
    }

    return 0;
}
