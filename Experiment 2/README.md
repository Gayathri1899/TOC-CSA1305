# Non-Deterministic Finite Automata (NFA) Simulation in C

## Aim

To write a C program to simulate a **Non-Deterministic Finite Automata (NFA)** for the language representing binary strings that **start with `0` and end with `1`**.

## Project Description

This project implements a Non-Deterministic Finite Automata (NFA) in C to recognize binary strings that start with `0` and end with `1`. The program validates the given input string and displays whether it is accepted or rejected based on the specified language.

## Features

- Simulates a Non-Deterministic Finite Automata (NFA)
- Accepts binary strings over the alphabet `{0,1}`
- Checks whether the string starts with `0`
- Checks whether the string ends with `1`
- Rejects invalid symbols
- Displays whether the string is accepted or rejected

## Language

- C

## Algorithm

1. Read the input string.
2. Verify that every character is either `0` or `1`.
3. Check whether the first character is `0`.
4. Check whether the last character is `1`.
5. If both conditions are satisfied, display **Accepted**.
6. Otherwise, display **Rejected**.

## Time Complexity

**O(n)**

where **n** is the length of the input string.

## Space Complexity

**O(1)**

## Sample Input

```text
00101
```

## Sample Output

```text
Accepted
```


## Result

The C program successfully simulates a **Non-Deterministic Finite Automata (NFA)** for binary strings that start with `0` and end with `1`, and correctly determines whether the given input string is accepted or rejected.

## Author

Gayathri
