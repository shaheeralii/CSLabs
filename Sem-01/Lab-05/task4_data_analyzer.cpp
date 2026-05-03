/*
 * Author: Syed Shaheer Ali
 * Task: 04 - Data Analyzer
 * Purpose: Collects measurements into an array and only terminates when an 
 *          array is successfully filled without any zero values.
 */

#include <iostream>
#include <string>
using namespace std;
int main() {
    const int MAX_LIMIT = 10;
    int array[MAX_LIMIT];
    bool zeroFound;
    int count;

    do {
        zeroFound = false;
        count = 0;
        
        cout << "Enter array elements (enter '0' to terminate input):\n";

        for (int i = 0; i < MAX_LIMIT; i++) {
            int input;
            cin >> input;

            if (input == 0) {
                zeroFound = true;
                break;
            }

            array[count] = input;
            count++;
        }
    } while (zeroFound);

    cout << "Array with no zero values: ";
    for (int i = 0; i < count; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}