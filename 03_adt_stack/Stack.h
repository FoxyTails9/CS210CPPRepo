// TASK 03 -- An Abstract Data Type (ADT)
//
// An ADT is defined by WHAT operations it supports, not by HOW those
// operations are implemented. A stack is: push, pop, top, isEmpty, size.
// That's the whole contract. Whether it's backed by an array, a
// std::vector, or a linked list is an implementation detail the user of
// this class should never have to think about.
//
// This header is the ADT's public face: the operations, and nothing
// about how they're carried out.

#pragma once

#include <vector>

class Stack {
public:
    Stack();
    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
    bool isFull() const;
    int size() const;

private:
    int data[100];
    int topIndex;
};
