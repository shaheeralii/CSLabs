# Lab 10: C++ Structures

This repository contains C++ implementations for **Lab 10: Structures**. The tasks demonstrate core concepts of procedural programming in C++, including structure definitions, nested structures, array manipulation, memory efficiency via references, and basic CRUD operations.

---

## 📁 Files & Task Overview

| File Name | Task Name | Key Concepts Covered |
| :--- | :--- | :--- |
| `task1_company_view.cpp` | **Task 1: Company Hierarchy Overview** | Nested Structures, Arrays of Structures, Data Hierarchy |
| `task2_library_mgmnt_sys.cpp` | **Task 2: Library Management System** | Searching (Linear Search), Sorting (Bubble Sort), Struct Arrays |
| `task3_dist_calculator.cpp` | **Task 3: Geometric Line Distance Calculator** | Mathematical Computations (`<cmath>`), Nested Struct Composition |
| `task4_hospital_mgmnt_sys.cpp` | **Task 4: Hospital Management System** | Data CRUD (Add, Update, Search, Delete), Array Shifting |
| `task5_area_calculator.cpp` | **Task 5: Room Area Calculator** | Pass-by-Reference (`&`), Pass-by-Const-Reference (`const &`) |

---

## 📝 Detailed Task Descriptions

### 1. `task1_company_view.cpp`
* **Purpose:** Models an organizational hierarchy consisting of departments, assigned managers, and employees.
* **Key Features:**
  * Defines an `Employee` structure and a nested `Department` structure.
  * Allows adding departments with optional manager assignments.
  * Displays structured views of departments along with their associated workforce.

### 2. `task2_library_mgmnt_sys.cpp`
* **Purpose:** Manages a digital library catalog storing titles, authors, and publication years.
* **Key Features:**
  * Allows adding new book records into a static array.
  * Implements search functions to locate books by title or retrieve all titles by a given author.
  * Features an array-sorting algorithm (Bubble Sort) to organize books alphabetically by title.

### 3. `task3_dist_calculator.cpp`
* **Purpose:** Computes the Euclidean distance between two 2D points using nested geometric structures.
* **Key Features:**
  * Defines a 2D Cartesian `Point` structure (`x`, `y`) composed inside a `Line` structure (`start`, `end`).
  * Applies the distance formula: 
    $$\text{distance} = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$$
  * Demonstrates modular design by separating coordinate input gathering from mathematical execution.

### 4. `task4_hospital_mgmnt_sys.cpp`
* **Purpose:** Implements a full patient database system for hospital administration.
* **Key Features:**
  * Manages patient records (ID, Name, Age, Medical History).
  * Supports record updates and specific patient searches.
  * Implements deletion by left-shifting array elements to maintain data sequence and memory integrity.

### 5. `task5_area_calculator.cpp`
* **Purpose:** Calculates the floor area of a rectangular room using optimized parameter passing.
* **Key Features:**
  * Defines a simple `Room` structure with `length` and `width` members.
  * Demonstrates **Pass-by-Reference (`Room &`)** for input functions to modify struct fields directly.
  * Demonstrates **Pass-by-Const-Reference (`const Room &`)** for read-only calculations to eliminate memory copy overhead while ensuring immutability.

---

## 🛠️ How to Compile & Run

To compile and execute any task using standard C++ compilers (GCC/G++):

```bash
# Example: Compiling Task 1
g++ -o task1 task1_company_view.cpp

# Running the executable
./task1