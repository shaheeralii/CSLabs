# Lab 09: String Handling

![Status](https://img.shields.io/badge/Status-Completed-brightgreen)

This repository contains C++ solutions for **Lab 09**, focusing on string manipulation, character-level operations, and built-in string functions to process and transform text data.

---

## 🗒️ Task Overview

| File | Task | Description |
|---|---|---|
| `task1_replace_word.cpp` | **Greeting Card Company** | Replaces targeted words within a personalized greeting card message string using string substitution. |
| `task2_compare_strings.cpp` | **Feature Enhancement** | Compares the character lengths of two input status messages and displays the shorter one, or identifies if they are equal. |
| `task3_basic_concatenation.cpp` | **Customer Service** | Takes separate multi-part text responses from an agent and concatenates them into a single coherent message. |
| `task4_string_dupe.cpp` | **Text Processing Application** | Reads a string input from the user and duplicates its content completely into another empty string. |
| `task5_manipulating_string.cpp` | **String Manipulator** | Modifies a name string into a structured username by converting characters to uppercase, substituting spaces with underscores, and reversing the entire string. |
| `task6_capitalize_sentence.cpp` | **Capitalize Sentence** | Processes an input text sentence or paragraph and reformats it by converting the first letter of each individual word to uppercase. |

---

## 📁 File Structure

```
Lab-09/
├── task1_replace_word.cpp
├── task2_compare_strings.cpp
├── task3_basic_concatenation.cpp
├── task4_string_dupe.cpp
├── task5_manipulating_string.cpp
└── task6_capitalize_sentence.cpp
```

---

## 💡 Concepts Covered

| Concept | Tasks |
|---|---|
| String substitution (`find` & `replace`) | Task 1 |
| String length comparison | Task 2 |
| String concatenation | Task 3 |
| String copying | Task 4 |
| `toupper`, space-to-underscore, `reverse` | Task 5 |
| Word-by-word capitalization | Task 6 |

---

## ⚙️ How to Compile & Run

```bash
g++ task1_replace_word.cpp -o task1 && ./task1
g++ task2_compare_strings.cpp -o task2 && ./task2
g++ task3_basic_concatenation.cpp -o task3 && ./task3
g++ task4_string_dupe.cpp -o task4 && ./task4
g++ task5_manipulating_string.cpp -o task5 && ./task5
g++ task6_capitalize_sentence.cpp -o task6 && ./task6
```s