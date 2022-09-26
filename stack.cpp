#include "stack.hpp"

Stack::Stack_a(){
    this->TOP = Nil;
    this->T[this->TOP] = Nil;
}

bool Stack::isEmpty(){
    return (this->TOP == Nil);
}

bool Stack::isFull()
{
    return (this->TOP == MaxEl);
}

void Stack::push(info x){
    if (this->isFull())
    {
        cout << "Stack Penuh" << endl;
    }
    else
    {
        this->TOP++;
        this->T[this->TOP] = x;
    }
}

void Stack::pop(info *x)
{
    if (isEmpty()){
        cout << "Stack is empty" << endl;
    } else {
        *x = this->T[this->TOP];
        this->TOP--;
    }
}

void Stack::printStack(){
    if (this->isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        for (int i = this->TOP; i >= 1; i--)
        {
            cout << this->T[i] << endl;
        }
    }
}
