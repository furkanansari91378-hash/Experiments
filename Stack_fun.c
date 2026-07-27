
Q. Declaration, initialization, and updating of the stack data structure are carried out
with the help of push, pop, peek, and display functions on the elements of the stack.

Soln:

#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// 1. Push Operation
void push(int data) {
    if (top == MAX - 1) {
        printf("Stack Overflow! %d\n", data);
    } else {
        top++;
        stack[top] = data;
        printf("Pushed: %d\n", data);
    }
}

// 2. Pop Operation (Remove and return top element)
void pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
    } else {
        printf("Popped: %d\n", stack[top]);
        top--;
    }
}

// 3. Peek Operation (View top element without removing)
void peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Peek (Top Element): %d\n", stack[top]);
    }
}

// 4. Display Operation (Print all stack elements)
void display() {
    if (top == -1) {
        printf("Stack is empty!");
    } else {
        printf("The stack elements are:");
        for (int i = top; i >= 0; i--) {
            printf("\n|%d|", stack[i]);
        }
        printf("\n");
    }
}

int main() {

    push(100);
    push(101);
    push(102);
    push(103);

    display();
    peek();    
    pop();     

    display();
    peek();
    pop();

    display();
    peek();
    pop(); 

    display();

    return 0;
}