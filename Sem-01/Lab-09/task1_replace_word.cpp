/*
 * Author: Syed Shaheer Ali
 * Task: 01 - Greeting Card Company
 * Lab: 09 - String Handling
 * Purpose: Replaces targeted words within a personalized greeting card message string using string substitution.
 */

#include <iostream>
#include <string>
using namespace std;

void replaceWord(string input) {
    string wordSearch;
    string newWord;

    cout << "\nEnter the word to be replaced: ";
    cin >> wordSearch;
    cout << "\nEnter the new word: ";
    cin >> newWord;

    int pos = input.find(wordSearch);
    while (pos < input.length()) {
        input.replace(pos, wordSearch.length(), newWord);
        pos = input.find(wordSearch, pos + newWord.length());
    }
    cout << "Updated Message: " << input;
}

int main () {
    string userMsg;
    cout << "\nEnter the message for your greeting card: ";
    
    getline(cin, userMsg);
    replaceWord(userMsg);

    return 0;
}