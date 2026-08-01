# String Validation for the Grammar S → 0S0 | 1S1 | 0 | 1 | ε

## Aim

To write a C program to check whether a given string belongs to the grammar:

```
S → 0S0 | 1S1 | 0 | 1 | ε
```

## Project Description

This project implements a C program to check whether a given binary string belongs to the specified context-free grammar. The grammar generates all binary palindromes, including the empty string. The program verifies whether the input string is a palindrome containing only the symbols `0` and `1`.

## Features

- Checks whether the input string belongs to the given grammar.
- Accepts binary strings over the alphabet `{0,1}`.
- Rejects invalid symbols.
- Verifies whether the string is a binary palindrome.
- Displays whether the string is accepted or rejected.

## Language

- C

## Algorithm

1. Read the input string.
2. Verify that every character is either `0` or `1`.
3. Compare the first and last characters.
4. Continue comparing characters from both ends towards the center.
5. If all corresponding characters are equal, accept the string.
6. Otherwise, reject the string.

## Time Complexity

**O(n)**

where **n** is the length of the input string.

## Space Complexity

**O(1)**

## Sample Input

```text
1001
```

## Sample Output

```text
Accepted
```

## Result

The C program successfully checks whether the given binary string belongs to the grammar **S → 0S0 | 1S1 | 0 | 1 | ε** by verifying if it is a binary palindrome.

## Author

Gayathri
