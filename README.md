# 📚 Stack DS Using C++

> A C++ implementation of a **Stack Data Structure using a Singly Linked List**, supporting push, pop, peek, display, search, size, empty check, and reverse operations.

---

## 📝 About the Project

The **Stack DS Using C++** project implements a Stack data structure using a Singly Linked List in C++.

A stack follows the **LIFO (Last In, First Out)** principle, which means the element inserted last is removed first.

```text
                TOP
                 │
                 ▼
              ┌─────┐
              │ 40  │  ← Last inserted
              ├─────┤
              │ 30  │
              ├─────┤
              │ 20  │
              ├─────┤
              │ 10  │  ← First inserted
              └─────┘
                 │
                NULL
```

The project dynamically creates nodes using `new` and removes nodes using `delete`.

---

## ✨ Features

* ➕ **Push Element** – inserts an element at the top of the stack
* ➖ **Pop Element** – removes the top element
* 👀 **Peek Top Element** – displays the top element without removing it
* 📊 **Display Stack** – displays all elements from top to bottom
* 🔍 **Search Element** – checks whether an element is present
* 📏 **Find Stack Size** – returns the number of elements
* ✅ **Check Empty** – checks whether the stack is empty
* 🔄 **Reverse Stack** – reverses the stack
* 🚪 **Exit** – terminates the program

---

## 🧠 How It Works

The stack is implemented using a **Singly Linked List**.

Each node contains:

```text
┌───────────────┐
│     data      │
├───────────────┤
│     link      │
└───────────────┘
```

The `top` pointer always points to the first node of the stack.

```text
                         TOP
                          │
                          ▼
                    ┌───────────┐
                    │    40     │
                    │   link ───┼──────┐
                    └───────────┘      │
                                       ▼
                                 ┌───────────┐
                                 │    30     │
                                 │   link ───┼──────┐
                                 └───────────┘      │
                                                    ▼
                                              ┌───────────┐
                                              │    20     │
                                              │   link ───┼──────┐
                                              └───────────┘      │
                                                                 ▼
                                                           ┌───────────┐
                                                           │    10     │
                                                           │ link=NULL │
                                                           └───────────┘
```

**Push**

A new node is created and added at the top.

```text
Before:

TOP → 30 → 20 → 10 → NULL

Push 40

After:

TOP → 40 → 30 → 20 → 10 → NULL
```

**Pop**

The top node is removed from the stack.

```text
Before:

TOP → 40 → 30 → 20 → 10 → NULL

Pop

After:

TOP → 30 → 20 → 10 → NULL
```

**Reverse**

The links between the nodes are reversed.

```text
Before:

TOP → 30 → 20 → 10 → NULL

After:

TOP → 10 → 20 → 30 → NULL
```

---

## 📁 Project Structure

```text
Stack DS in C++/
│
├── stack.h
├── stack.cpp
├── main.cpp
└── README.md
```

**File Description**

| File        | Description                                                        |
| ----------- | ------------------------------------------------------------------ |
| `stack.h`   | Contains the Node structure, Stack class and function declarations |
| `stack.cpp` | Implements all Stack operations                                    |
| `main.cpp`  | Contains the menu-driven program and user interaction              |
| `README.md` | Project documentation                                              |

---

## 🛠️ Technologies & Concepts

| Category       | Used                       |
| -------------- | -------------------------- |
| Language       | C++                        |
| Data Structure | Stack                      |
| Linked List    | Singly Linked List         |
| Concepts       | Classes, Objects, Pointers |
| Environment    | Linux / WSL                |
| Compiler       | G++                        |

---

## 🔄 Program Flow

```text
                 START
                   │
                   ▼
             Create Stack
                   │
                   ▼
             Display Menu
                   │
                   ▼
          Enter User Choice
                   │
       ┌───────────┼───────────┐
       ▼           ▼           ▼
     Push         Pop         Peek
       │           │           │
       └───────────┼───────────┘
                   │
       ┌───────────┼───────────┐
       ▼           ▼           ▼
    Display      Search       Size
       │           │           │
       └───────────┼───────────┘
                   │
             ┌─────┴─────┐
             ▼           ▼
         Is Empty      Reverse
             │           │
             └─────┬─────┘
                   ▼
             Display Menu
                   │
                   ▼
                  Exit
```

---

## 🚀 How to Run

**1️⃣ Compile**

```bash
g++ *.cpp
```

**2️⃣ Run**

```bash
./a.out
```

**3️⃣ Select an Operation**

```text
=============================================
           STACK USING LINKED LIST
=============================================
1. Push Element
2. Pop Element
3. Peek Top Element
4. Display Stack
5. Search element
6. Find stack size
7. Check if stack is empty
8. Reverse the stack
9. Exit
=============================================
```

---

## 📊 Sample Output

**➕ Push Elements**

```text
Enter your choice
1

Enter the element to push: 10

SUCCESS
 10 has been pushed onto the stack.

Enter your choice
1

Enter the element to push: 20

SUCCESS
 20 has been pushed onto the stack.

Enter your choice
1

Enter the element to push: 30

SUCCESS
 30 has been pushed onto the stack.

Enter your choice
1

Enter the element to push: 40

SUCCESS
 40 has been pushed onto the stack.
```

**📊 Display Stack**

```text
Enter your choice
4

Displaying the elements in the stack...
Current Stack:
40 -> 30 -> 20 -> 10 -> NULL
```

**➖ Pop Element**

```text
Enter your choice
2

SUCCESS
 40 has been removed form the stack.
```

After popping:

```text
Current Stack:
30 -> 20 -> 10 -> NULL
```

**🔍 Search Element**

```text
Enter your choice
5

Enter the element to search
30

Search Result: 30 is present in the stack
```

**📏 Find Stack Size**

```text
Enter your choice
6

Current stack size : 3 element(s).
```

**✅ Check if Stack is Empty**

```text
Enter your choice
7

Stack Status : The stack contains elements.
```

**🔄 Reverse Stack**

Before reversing:

```text
Current Stack:
30 -> 20 -> 10 -> NULL
```

Select:

```text
8
```

Output:

```text
Stack reversed successfully.
Reversed Stack : 10 -> 20 -> 30 -> NULL
```

**👀 Peek Top Element**

```text
Enter your choice
3

Peek operation Successful
Top element : 30
```

**🚪 Exit**

```text
Enter your choice
9

Program terminated successfully.
```

---

## 💡 Key Learning

Through this project, I gained practical experience in Stack, Singly Linked List, Classes & Objects, Pointers, Dynamic Memory Allocation, LIFO Operations, Linked List Manipulation
```


---

## 🧪 Result

Successfully developed a **Stack Data Structure using a Singly Linked List in C++** with operations for push, pop, peek, display, search, size, empty check, and reverse.

The project demonstrates practical use of classes, pointers, dynamic memory allocation, and linked-list manipulation in C++.

---

## 👤 Author

**Sk Shabeena**

* Email: [skshabeena33@gmail.com]
* LinkedIn: [Shaik Shabeena](https://www.linkedin.com/in/shaik-shabeena-36a7b933/)
