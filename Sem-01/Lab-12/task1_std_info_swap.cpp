/*
 * Author: Syed Shaheer Ali
 * Task: 01 - Student Information Swap Task
 * Lab: 12 - Pointers
 * Purpose: Swaps the internal structural records of two students using structure pointers.
 */

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    int grade;
};

void swap(Student* ptr1, Student* ptr2) {
    Student temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main () {
    Student s1{"John", 15, 10};
    Student s2{"Alice", 16, 11};

    Student *s1Ptr = &s1;
    Student *s2Ptr = &s2;

    cout << "Before Swapping\n";
    cout << "Student 1: Name: " << s1.name << ", Age: " << s1.age << ", Grade: " << s1.grade;
    cout << "\nStudent 2: Name: " << s2.name << ", Age: " << s2.age << ", Grade: " << s2.grade;
    
    swap(s1Ptr, s2Ptr);

    cout << "\nAfter Swapping\n";
    cout << "Student 1: Name: " << s1.name << ", Age: " << s1.age << ", Grade: " << s1.grade;
    cout << "\nStudent 2: Name: " << s2.name << ", Age: " << s2.age << ", Grade: " << s2.grade;
    return 0;
}