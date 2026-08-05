# Lab 06: Multi-Dimensional Arrays in C++

**Author:** Syed Shaheer Ali  
**Course:** Programming Fundamentals / Data Structures  
**Topic:** Multi-Dimensional Arrays (2D Matrices & Applications)

---

## 📌 Repository Overview

This repository contains C++ implementations for **Lab 06**, focusing on working with multi-dimensional arrays, matrix transformations, array linearization, dynamic row-column manipulation, and grid-based interactive applications.

---

## 📁 File Structure & Task Descriptions

### 1. `task1_inv_track_module.cpp`
* **Task Title:** Inventory Tracking Module (Matrix Addition)
* **Purpose:** Consolidates warehouse inventory levels across multiple product lines and locations. The program reads two 2D matrices representing current (`Matrix A`) and previous month (`Matrix B`) stock counts, then computes their element-wise sum to generate a consolidated inventory report.
* **Key Concepts:** 2D Array Traversals, Matrix Addition, Standard Input/Output.

---

### 2. `task2_grade_organize.cpp`
* **Task Title:** Student Grades Organization (Matrix Transpose)
* **Purpose:** Re-indexes student academic performance data for analytical processing. It accepts an N × M matrix (Students × Assignments), transposes it into an M × N matrix (Assignments × Students), and calculates the average score for each individual assignment.
* **Key Concepts:** Matrix Transposition, Index Swapping ((i, j) → (j, i)), Floating-point Averaging.

---

### 3. `task3_linearization.cpp`
* **Task Title:** Image Compression & Linearization
* **Purpose:** Demonstrates image matrix unrolling/flattening used in computer vision and signal processing pipelines. It transforms a 2D image pixel grid into a 1D continuous linear stream using Row-Major Order mapping, followed by basic Run-Length Encoding (RLE) to evaluate data compression ratios.
* **Key Concepts:** Row-Major Index Mapping (Index = i × cols + j), 2D-to-1D Unrolling, Run-Length Encoding (RLE).

---

### 4. `task4_event_seat_mgmngt.cpp`
* **Task Title:** Professional Event Management - Seating Arrangement
* **Purpose:** Provides a real-time interactive terminal application to manage a 5 × 5 conference room seating layout. Features include seat bookings with designation tags (`F` = Finance, `M` = Marketing, `E` = Engineering), real-time profession metric counting, available seat calculation, and continuous grid display.
* **Key Concepts:** Menu-Driven Control Loops, Modular Functions with 2D Array Parameters, State Tracking.

---

### 5. `task5_tictactoe.cpp`
* **Task Title:** Interactive 2-Player Tic-Tac-Toe Game
* **Purpose:** Implements a complete two-player Tic-Tac-Toe game on a 3 × 3 grid. It takes coordinate inputs from two players (`X` and `O`), updates the grid, validates against illegal moves/overwrites, and checks horizontal, vertical, and diagonal win vectors or draw states after every move.
* **Key Concepts:** Game Loop Logic, 2D Grid State Validation, Win Condition Pattern Matching.

---

## ⚙️ Compilation & Execution Instructions

To compile and run any task using standard C++ compilers (GCC/G++):

```bash
# Example for Task 1
g++ -o task1 task1_inv_track_module.cpp
./task1

# Example for Task 5
g++ -o task5 task5_tictactoe.cpp
./task5