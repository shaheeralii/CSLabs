/*
 * Author: Syed Shaheer Ali
 * Task: 05 - Clock Time Converter
 * Purpose: Uses integer division and modulus operators to convert raw seconds into Hours:Minutes:Seconds.
 */

 #include <iostream>
using namespace std;
int main() {
    int sec;
    
    cout << "Welcome to the Clock Time Converter!\n";
    cout << "Enter the time duration in seconds: ";
    cin >> sec;

    while (sec < 0) {
        cout << "\nInvalid Input! Re-enter time in seconds: ";
        cin >> sec;
    }

    int hr = sec / 3600;
    int min = (sec % 3600) / 60;
    int final_sec = sec % 60;

    cout << "\nResults: ";
    cout << "\n---------------\n";
    cout << "Original Time: " << sec;
    cout << "\nCoverted Time: " << hr << " hour, " << min << " minutes, and " << final_sec << " seconds";

    return 0;
}