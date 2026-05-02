# Lab 04: Advanced Nested Control Structures
![Completed](https://img.shields.io/badge/Status-Completed-success)

This repository contains C++ solutions for **Lab 04**, focusing on multi-level nested loops, pattern generation, and handling complex terminal inputs.

## 📋 Task Overview

| File | Task | Description |
| :--- | :--- | :--- |
| `task1_dept_salary_overview.cpp` | **Department Payroll** | Processes employee data across multiple departments using nested for-loops. |
| `task2_period_subject_assign.cpp`| **School Timetable** | Simulates a 5-day week with 6 periods each to record subject assignments. |
| `task3_star_pattern_gen.cpp` | **Star Pattern Gen** | A menu-driven tool to generate Hollow Square, Filled Square, and Pyramid patterns. |
| `task4_floyd_triangle_gen.cpp` | **Floyd's Triangle** | Generates a sequential numeric right-angled triangle using nested iterations. |

## 🧠 Key Concepts Covered
* **Multi-Level Iteration:** Synchronizing outer and inner loops to handle 2D data like Days/Periods and Departments/Employees.
* **Buffer Management:** Using `cin.ignore()` to prevent input skipping when transitioning between `cin >>` and `getline()`.
* **Boundary Logic:** Implementing conditional statements inside loops to create hollow shapes and specific geometric patterns.
* **Format Control:** Precise use of escape sequences (`\n`) and line breaks to match professional administrative UI layouts.

## 🚀 Compilation & Execution
To run any task, use the following commands in your terminal:
```bash
g++ <filename>.cpp -o output
./output
