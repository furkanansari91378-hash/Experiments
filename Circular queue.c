#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void insert(int value) {
    if ((rear == (front - 1) % (SIZE - 1))) 
    {
        printf("Queue is full!\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
        queue[rear] = value;
    } else if (rear == SIZE - 1 && front != 0) {
        rear = 0;
        queue[rear] = value;
    } else {
        rear++;
        queue[rear] = value;
    }
    printf("Inserted: %d\n", value);
}
// Delete function
void delete() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted: %d \n", queue[front]);
    if (front == rear) { // Only one element
        front = rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
}

void display() {
    if (front == -1) {
        printf("Queue Underflow!\n");
        return;
    }
    printf("Queue elements: ");
    if (rear >= front) {
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    } else {
        for (int i = front; i < SIZE; i++)
            printf("%d ", queue[i]);
        for (int i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(100);
    insert(1000);
    display();

    delete();
    delete();
    display();

    insert(100);
    insert(10);
    display();

    return 0;
}