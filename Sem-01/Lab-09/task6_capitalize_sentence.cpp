/*
 * Author: Syed Shaheer Ali
 * Task: 06 - Capitalize Sentence in a Paragraph
 * Lab: 09 - String Handling
 * Purpose: Processes an input text sentence/paragraph and reformats it by converting the first letter of each individual word to uppercase.
 */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void modParagraph(string text) {
    for (int i = 0; i < text.length(); i++) {
        if (isalpha(text[i])) {
            text[i] = toupper(text[i]);
            break;
        }
    }
    cout << "\nFormatted paragraph:\n" << text << endl;
}

int main () {
    string text;
    cout << "Enter a paragraph: ";

    getline(cin, text);
    modParagraph(text);
    
    return 0;
}