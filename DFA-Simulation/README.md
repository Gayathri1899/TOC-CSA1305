# Deterministic Finite Automata (DFA) Simulation in C

## Project Description

This project implements a Deterministic Finite Automata (DFA) in C to recognize strings that **start with 'a' and end with 'a'** over the alphabet `{a, b}`. The program validates the given input string by simulating DFA state transitions and displays whether the string is accepted or rejected.

## Features

- Simulates a Deterministic Finite Automata (DFA)
- Accepts strings over the alphabet `{a, b}`
- Checks whether the string starts with `a`
- Checks whether the string ends with `a`
- Displays whether the input string is accepted or rejected
- Simple and efficient implementation in C

## Language

- C

## Algorithm

1. Start in the initial state.
2. Read the input string character by character.
3. If the first character is not `a`, reject the string.
4. Continue processing each character according to the DFA transition rules.
5. After reading the complete string, check the final state.
6. If the final state is an accepting state, display **Accepted**.
7. Otherwise, display **Rejected**.

## Time Complexity

**O(n)**

where **n** is the length of the input string.

## Space Complexity

**O(1)**

## Sample Input

```
abba
```

## Sample Output

```
Accepted
```

## Output Screenshot

![Output](output.png)

## Author

Gayathri
