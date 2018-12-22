// stack.h -- class definition for the stack ADT 
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack 
{
private:
    enum {MAX = 10}; 
    Item items[MAX]; int top;
public: Stack();
    // constant specific to class // holds stack items
    // index for top stack item
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise 
    bool push(const Item & item); // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item); // pop top into item 
};
#endif

Stack::Stack() // create an empty stack 
{
    top = 0; 
}

bool Stack::isempty() const 
{
    return top == 0; 
}

bool Stack::isfull() const 
{
    return top == MAX; 
}

bool Stack::push(const Item & item) 
{
    if (top < MAX) {
        items[top++] = item;
        return true; 
    }
    else
        return false;
}
bool Stack::pop(Item & item) 
{
    if (top > 0) {
        item = items[--top];
        return true; 
    }
    else
        return false;
}