# Lab 07: Modular Programming with Functions
![Completed](https://img.shields.io/badge/Status-Completed-success)

This repository contains C++ solutions for **Lab 07**, focusing on functional decomposition, mastering the distinction between **Pass-by-Value** and **Pass-by-Reference**, and applying trigonometric functions to coordinate geometry.

## 📋 Task Overview

| File | Task | Implementation Highlight |
| :--- | :--- | :--- |
| `task1_basic_calculator.cpp` | **Basic Calculator** | Implements modular arithmetic operations using functions with return values and `<cmath>` integration. |
| `task2_atm_system.cpp` | **ATM System** | Demonstrates **Pass-by-Reference** (`&`) to modify account balances across multiple transactions in a loop. |
| `task3_number_analysis.cpp` | **Number Analysis** | Analyzes 3-digit numbers to extract specific digits, calculate sums, and determine palindrome status. |
| `task4_driving_eligible_test.cpp` | **Driving Eligibility** | Assesses eligibility based on age, vehicle type, and license status using nested conditional logic. |
| `task5_finance_tracker.cpp` | **Personal Finance** | Tracks income and expenses using an **if-else ladder** and reference-based global state updates. |
| `task6_circular_pattern.cpp` | **Circular Pattern** | Generates coordinates along a circumference using `sin()` and `cos()` trigonometric functions. |

## 🧠 Key Technical Learnings
* **Modularization:** Breaking complex logic into small, reusable functions to keep the `main()` function clean and readable.
* **Pass-by-Reference (`&`):** Essential for functions that need to modify the original variables in `main()`, such as maintaining a running balance or budget.
* **Return Values:** Utilizing specific return types (like `double` or `int`) to pass calculated data back to the caller.
* **Coordinate Geometry:** Using trigonometric constants (like `PI`) and functions to calculate spatial coordinates.
* **String-Digit Mapping:** Converting specific characters within a string back to integers using the ASCII offset `s[i] - '0'`.

## 🚀 Execution
To compile and run any task, use the following commands in your terminal:

```bash
g++ <filename>.cpp -o output
./output
