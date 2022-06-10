// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
 private:
     T arr[100];
     int top;
 public:
     TStack():top(-1) { }
     bool Full() const {
         return top == size - 1;
     }
     bool Empty() const {
         return top == -1;
     }
     void push(T obj) {
         if (top < size - 1)
             arr[++top] = obj;
     }
     T get() const {
         return arr[top];
     }
     void pop() {
         if (top >= 0)
             --top;
     }
};
#endif  // INCLUDE_TSTACK_H_
