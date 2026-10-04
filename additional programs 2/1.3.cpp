#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    vector<string> words;

    // Break the sentence into words
    while (ss >> word) {
        words.push_back(word);
    }

    // Print the words in reverse order
    cout << "Reversed word order: ";
    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i];
        if (i > 0) {
            cout << " "; // Print a space between words
        }
    }
    cout << endl;

    return 0;
}
