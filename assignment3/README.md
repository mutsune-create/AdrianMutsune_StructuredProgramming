# Task 1: Pointer Concepts

## 1. Normal Variable vs. Pointer
* **Normal Variable:** Stores an actual **data value** (like `5` or `'A'`). Memory is accessed directly by the variable name.
* **Pointer:** Stores a **memory address** of another variable. Memory is accessed indirectly by "pointing" to that location.
* **Modifying:** Changing a normal variable updates its own value; changing a pointer (via dereferencing) updates the value at the address it holds.

## 2. Declaration and Definition
* **Variable:** `int x = 10;` (Allocates space for an integer).
* **Pointer:** `int *ptr;` (Allocates space for an address)
* **Operators:**
    * `&` (Address-of): Gets the memory address of a variable (e.g., `ptr = &x;`)
    * `*` (Pointer declaration): Used to define a pointer type
    * 'ptr = &x;' the value of ptr is the address of x.
## 3. Dereferencing a Pointer
* **dereferencing:** is the act of using a pointer to access or modify the actual value stored at the memory address it is holding.
    * **Accessing the value stored in an address**
    #include <stdio.h>
    #include <stdlib.h>
    
    int main (){
    int x = 3;
     int* ptr = &x;
     printf("%d",*ptr);
    return 0;
    }
    * **Changing the value stored in an address**
    #include <stdio.h>
    #include <stdlib.h>
    
    int main() {
     int x = 3;
     int* ptr = &x;
     *ptr = 5;
     printf("%d",x);
    return 0;
    }

## 4. Use Cases for Pointers
Pointers are preferred over normal variables in the following scenarios:

1. **Memory Efficiency:** Passing large objects to functions by reference (address) instead of copying the whole value.
2. **Dynamic Allocation:** Handling data structures (like linked lists or dynamic arrays) where the size changes during runtime.
3. **Persistent Changes:** Allowing functions to modify variables defined in other parts of the program.

**Efficiency in passing large structure**
struct UserProfile {
    char name[100];
    char bio[5000];
    int age;
};

void updateAge(struct UserProfile *p) {
    p->age = 21; 
}

**Modifying original variables**
struct UserProfile {
    char name[100];
    char bio[5000];
    int age;
};

void updateAge(struct UserProfile *p) {
    p->age = 21;
}

## 5. Limitations of using pointers compared to variables
1. **Memory leaks:** memory allocated via pointers stay occupied until they are manualy released. if you lose the pointer address before calling free(), the memory remains reserved but inaccessible.the continuous growth of RAM usage slows the entire system.
2. **Segmentation faults:** Normal variables ar relatively safe because you cant easily poit them at forbiden memory. Pointers can be accidentaly set to NUll or a random meemory address. An attempt to read restriicted memory areas cause the OS to kill programs.
3. **Dangling pointers:** Dangling pointers occur when a pointer still holds the address of memory location that has already been freed or deleted. Attempts to dereference pointers later, youll be accessing "garbage" data or memory that might now belong to different parts of the of the program.

## 6. Call by value and call by reference
1. **Call by value:** A copy of the actual value of the variable is passed to the function. the compiler creates an new location in memory for the function's parameter and copies data into it. Changes made to the parameter inside the function do not affect the original variable in the calling function.
#include <stdio.h>
#include <stdlib.h>
void increment(int a) {
    a = a + 1;
}

int main() {
    int x = 10;
    increment(x); 
    return 0;
}

2.**Call by reference:** Memory a adress of the variable is passeed to the function. Instead of copying the data, the function receives a pointer that points to the original variable's address. dereferencing the pointer inside the function, you can modify the original variablr directly.
#include <stdio.h>
#include <stdlib.h>
void increment(int *a) {
    *a = *a + 1;
}

int main() {
    int x = 10;
    increment(&x); // Pass the address using &
    return 0;
}

## 7. Preference to call by reference and call by value
1. **Call by value:**
*When protecting data integrity, to ensure that a functon cannot accidentally change
*for small data types like int char and float
2 **Call by reference is preferred**
*When handling large data structures 
*When modifying multiple variables
