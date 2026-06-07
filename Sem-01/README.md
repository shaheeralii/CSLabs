# 🧪 Lab 12 — Pointers in C++

**Course:** Introduction to Information & Communication Technology (CSL 114)
**Lab:** 12 | **Topic:** Pointers
**Author:** Syed Shaheer Ali
**Institution:** Bahria University, Karachi Campus

---

## 📋 Overview

This lab explores the fundamentals of **pointers in C++** through five practical tasks. The tasks demonstrate pointer dereferencing, pointer-based array traversal, passing arrays and structs via pointers to functions, and using dynamic tracking pointers — all grounded in real-world scenarios.

---

## 📁 File Structure

```
Lab-12/
├── task1_std_info_swap.cpp
├── task2_expense_manage.cpp
├── task3_key_swap_pointer.cpp
├── task4_organize_books.cpp
└── task5_find_tallest.cpp
```

---

## 🗂️ Tasks

### Task 1 — Student Information Swap
**File:** `task1_std_info_swap.cpp`

Uses **struct pointers** and **pass-by-reference** to swap the internal data (name, age, and grade) of two distinct `Student` objects without copying them by value.

**Key Concepts:** `struct` pointers, pass-by-reference, memory-safe data swapping

---

### Task 2 — Managing Expenses
**File:** `task2_expense_manage.cpp`

Calculates the **total expenditure** and **average spending** of a grocery trip by passing an integer array of expenses into a calculation function via a pointer.

**Key Concepts:** Array-pointer equivalence, pointer parameters, arithmetic via pointers

---

### Task 3 — Key Exchange at a Security Checkpoint
**File:** `task3_key_swap_pointer.cpp`

Performs a **memory-level swap** of two integer security key values using **pointer dereferencing**, directly accessing and exchanging values stored at their respective memory addresses.

**Key Concepts:** Pointer dereferencing (`*`), address-of operator (`&`), in-place value swapping

---

### Task 4 — Organizing a Shelf of Books
**File:** `task4_organize_books.cpp`

Sorts an array of book heights in **ascending order** using a **bubble sort** algorithm. The array is passed to the sorting function via a pointer, ensuring the original dataset is modified directly.

**Key Concepts:** Pointer-based array passing, bubble sort, in-place sorting

---

### Task 5 — Finding the Tallest Person in a Group
**File:** `task5_find_tallest.cpp`

Uses a **dynamic tracking pointer** to traverse an array of heights and stores the memory address of the maximum value — outputting both the tallest height and its **exact index position** in the array.

**Key Concepts:** Pointer traversal, tracking pointer pattern, index recovery from pointer arithmetic

---

## 💡 Concepts Covered

| Concept | Tasks |
|---|---|
| Struct pointers | Task 1 |
| Pass-by-reference | Task 1 |
| Array-pointer equivalence | Task 2, Task 4 |
| Pointer dereferencing | Task 3 |
| Pointer traversal | Task 5 |
| In-place data modification | Task 3, Task 4 |
| Tracking pointer pattern | Task 5 |

---

## ⚙️ How to Compile & Run

Each task is a standalone `.cpp` file. Compile and run individually using `g++`:

```bash
g++ task1_std_info_swap.cpp -o task1 && ./task1
g++ task2_expense_manage.cpp -o task2 && ./task2
g++ task3_key_swap_pointer.cpp -o task3 && ./task3
g++ task4_organize_books.cpp -o task4 && ./task4
g++ task5_find_tallest.cpp -o task5 && ./task5
```

> **Compiler:** g++ (GCC) | **Standard:** C++11 or later recommended (`-std=c++11`)

---

*Bahria University Karachi Campus — BS Computer Science, Spring 2026*
