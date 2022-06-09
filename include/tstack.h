// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
 private:
     T arr[100];
     int t;
 public:
     TStack() :t(-1) { }
     T get() const {
         return arr[t];
     }
     bool Full() const {
         return t == razmer - 1;
     }
     bool Empty() const {
         return t == -1;
     }
     void pop() {
         if (t >= 0)
             t--;
     }
     void push(T obj) {
         if (t < razmer - 1)
             arr[++t] = obj;
     }
};
#endif  // INCLUDE_TSTACK_H_
