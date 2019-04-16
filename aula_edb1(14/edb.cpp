#ifdef STACK_H
#define STACK_H

#include "vector.h"

struct stack{
    stack(int capacity);

    vector data;

    int clear();
    int empty();
    int push(int element);
    int pop();
    int top();
    int size();

};

#endif