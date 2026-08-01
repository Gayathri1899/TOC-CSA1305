# ε-Closure of an NFA with ε-Moves in C

## Aim

To write a C program to find the **ε-closure** for all the states in a **Non-Deterministic Finite Automata (NFA)** with ε-moves.

## Project Description

This project implements a C program to compute the **ε-closure** of every state in a Non-Deterministic Finite Automata (NFA) containing ε-transitions. The ε-closure of a state is the set of all states that can be reached from that state using only ε-transitions, including the state itself.

## Features

- Computes ε-closure for each state in the NFA
- Supports ε-transitions between states
- Displays the ε-closure of every state
- Simple and easy-to-understand implementation
- Suitable for Compiler Design and Theory of Computation laboratory experiments

## Language

- C

## Algorithm

1. Read the number of states in the NFA.
2. Read the ε-transition table for each state.
3. Initialize the ε-closure of each state with the state itself.
4. Traverse all ε-transitions recursively.
5. Add all reachable states to the ε-closure.
6. Repeat until no new states can be added.
7. Display the ε-closure for every state.

## Time Complexity

**O(n²)**

where **n** is the number of states.

## Space Complexity

**O(n²)**

## Sample Input

```text
Number of states = 3

ε-transitions:
A → B
B → C
C → -
```

## Sample Output

```text
ε-closure(A) = {A, B, C}
ε-closure(B) = {B, C}
ε-closure(C) = {C}
```


## Result

The C program successfully computes the **ε-closure** of every state in the given NFA with ε-transitions.

## Author

Gayathri
