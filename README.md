# ⚙️ C Programming Fundamentals: Memory & Pointers

-----

## 🎯 Project Overview

This collection of C programs explores fundamental concepts in low-level programming, specifically **memory management**, **pointers**, **stack allocation**, and **pointer arithmetic**. Each task is a standalone C file designed to illustrate a core principle of how data types and variables are handled in memory.

-----

## 📝 Task Breakdown

### Task 1: Data Types, Pointers, and Memory Layout

This program demonstrates the **address, value, and memory size** of fundamental C data types (`double`, `int`, `char`) and their corresponding **pointers**.

| Concept Illustrated | Key Takeaway |
| :--- | :--- |
| **Address (`&`)** | Every variable and every pointer has its own unique memory address. |
| **Value** | A variable holds its data, while its pointer holds the **memory address** of that variable. |
| **Size (`sizeof()`)** | The size of a data type (`double`, `int`, `char`) varies, but the size of a pointer (`double*`, `int*`, `char*`) is typically constant (e.g., 4 or 8 bytes) as it only needs to store an address. |

-----

### Task 2: Stack Allocation and Function Frames

This program demonstrates how **local variables are allocated on the stack** when functions are called.

| Concept Illustrated | Key Takeaway |
| :--- | :--- |
| **Stack Allocation** | When `foo1(7)` is called, the local variable `x` is allocated on the stack. When `foo1` returns and `foo2(11)` is called, the local variable `y` is allocated in the same memory region (or an adjacent region) that `x` previously occupied. |
| **Memory Proximity** | Observing the addresses of `x` (in `foo1`) and `y` (in `foo2`) often shows them to be very close or identical, illustrating the **LIFO (Last-In, First-Out)** nature of the call stack. |

-----

### Task 3 & 4: Pointer Arithmetic

These programs demonstrate the behavior of the addition operator (`+`) when applied to pointers.

| Task | Data Type | Concept Illustrated | Key Takeaway |
| :--- | :--- | :--- | :--- |
| **Task 3** | `double` | **Pointer Increment by Type Size.** Adding `1` to a `double` pointer increments the address by `sizeof(double)`. | The address difference between `dp` and `dp+1` will be **8 bytes** (typical size of a `double`). |
| **Task 4** | `int` | **Pointer Increment by Type Size.** Adding `1` to an `int` pointer increments the address by `sizeof(int)`. | The address difference between `ip` and `ip+1` will be **4 bytes** (typical size of an `int`). |

**Conclusion:** Pointer arithmetic is **type-aware**; it automatically scales the increment value by the size of the data type the pointer is pointing to, allowing it to move to the next logical element in an array/sequence.

-----

## 💻 How to Compile and Run

To compile and run any of these tasks, you will need a C compiler (like GCC).

1.  **Save the Code:** Save the code snippet for the desired task into a `.c` file (e.g., `task1.c`).
2.  **Compile:** Use GCC to compile the file.
    ```bash
    gcc task1.c -o task1 
    ```
3.  **Execute:** Run the compiled executable.
    ```bash
    ./task1
    ```

-----

*(Note: The addresses (e.g., `0x%x`) and variable sizes are system-dependent and may vary based on the compiler, operating system, and architecture.)*
