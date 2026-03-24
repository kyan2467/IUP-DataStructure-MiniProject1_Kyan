# IUP-DataStructure-MiniProject1_Kyan
Stack, Queue, and Deque implementation mini project

# Data Structure Mini Project 1

## Author

Renato Kiran Arisandi

## Project Description

This project demonstrates the implementation of three fundamental data structures: Stack, Queue, and Deque.

The program simulates a simple task management system where users can add tasks, process tasks, and undo previous actions.

## Data Structures Used
Stack

The stack data structure is used for storing the history of actions performed by the user. It follows the Last In, First Out (LIFO) principle, meaning the most recent action is the first one that can be undone. In this project, the stack is mainly used to implement the undo feature, allowing the program to revert the most recent operation when requested by the user.

Queue

The queue data structure is used to store normal tasks that will be processed in First In, First Out (FIFO) order. This means the task that is added first will be the first one to be processed. Using a queue ensures that tasks are handled fairly and in the order they were received.

Deque

The deque (double-ended queue) is used to manage urgent tasks. Unlike a regular queue, a deque allows insertion and removal of elements from both the front and the back. This flexibility makes it suitable for handling urgent tasks that may need to be prioritized or processed immediately depending on the situation.

## Program Features

* Add normal task
* Add urgent task
* Process tasks
* Undo last action
* Display tasks

## How to Run

1. Compile the program

g++ main.cpp -o program

2. Run the program

./program

## Course

Data Structures – IUP ITS
