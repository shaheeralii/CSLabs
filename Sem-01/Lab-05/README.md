# Lab 05: 1D Array Fundamentals & Data Manipulation
![Completed](https://img.shields.io/badge/Status-Completed-success)

This repository contains C++ solutions for **Lab 05**, focusing on 1D array implementations, including parallel array synchronization, linear search algorithms, in-place data rotation, and array reversal.

## 📋 Task Overview

| File | Task | Description |
| :--- | :--- | :--- |
| `task1_food_order_sys.cpp` | **Food Ordering** | Manages a digital menu and customer billing using parallel arrays for names and prices. |
| `task2_inv_restock.cpp` | **Inventory Manager** | Uses a search algorithm to locate products by name and update their stock levels. |
| `task3_rotational_clock.cpp` | **Rotational Clock** | Implements an in-place shifting algorithm to rotate elements left or right. |
| `task4_data_analyzer.cpp` | **Data Analyzer** | Collects process data and uses validation flags to identify "zero-free" arrays. |
| `task5_array_reverse_disp.cpp` | **Survey Analysis** | Transfers user ratings into a secondary array in reverse order for final analysis. |

## 🧠 Key Concepts Covered
* **Parallel Arrays:** Linking related data (e.g., Product Name and Product Price) by sharing a common index across multiple arrays.
* **Linear Search:** Implementing search loops with boolean "found" flags to interact with specific array elements via string matching.
* **In-Place Modification:** Shifting array elements manually to perform rotations without relying on excessive temporary memory.
* **Array Reversal:** Mastering the `array[size - 1 - i]` logic to map elements from one array to another in inverse order.
* **Input Validation:** Wrapping array assignments in loops to ensure data falls within valid bounds (e.g., ratings between 1-10).

## 🚀 Compilation & Execution
To run any task, use the following commands in your terminal:
```bash
g++ <filename>.cpp -o output
./output
