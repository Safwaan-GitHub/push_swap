# Push Swap Project

The Push Swap project is a highly efficient sorting challenge where the main objective is to sort a stack of numbers with a minimal set of operations. Utilizing two stacks, a and b, the goal is to take an unordered list of integers, apply a series of operations, and end up with the numbers sorted in ascending order in stack a.

This project not only tests your understanding of basic sorting algorithms but also challenges you to optimize your approach to minimize the number of operations used. It's a perfect blend of problem-solving, efficiency, and algorithm optimization.
How It Works

## Table of Contents
- [Installation](#installation)
- [Initial Setup](#initialSetup)
- [Features](#features)
- [Usage](#usage)
- [Challenges and Learnings](#challengesandlearnings)

## Installation

```
1. Clone the repository
- https://github.com/Safwaan-GitHub/push_swap.git

2. Change directory
- cd push_swap

3. Compile the program
- make
```

## Initial Setup:

You start with a stack a containing a random set of numbers and an empty stack b.
Operations: Only specific operations are allowed to manipulate the stacks, including swap (swap the first two elements), push (move the top element from one stack to the other), rotate (move the first element to the end), and reverse rotate (move the last element to the top).
Objective: The aim is to use these operations to sort the stack a in ascending order with the least moves possible. Stack b is used as auxiliary space to help with the sorting process.

## Features

Efficient Sorting Logic: Implements an algorithm that efficiently sorts numbers using the least number of operations.
Minimalist Operations: Focuses on the minimalist use of swaps, pushes, and rotations to achieve the sorted stack.
Error Handling: Robustly handles invalid inputs and errors gracefully.

## Usage

Input: The program takes a list of integers as an argument.
Output: It outputs the series of operations that sort the stack, which can be applied to the stack to sort it.

```
./push_swap x
```
Where x is any number/series of numbers
```
./push_swap 1 3
```
```
./push_swap 1 3 7 28 1000
```

## Challenges and Learnings

Algorithm Complexity: Understanding and implementing efficient sorting algorithms.
Optimization: Learning to optimize the sorting process to reduce the number of operations.

Big thanks to Oceano; https://github.com/suspectedoceano for the ideas and inspiration!
