#include <stdio.h>
#define size 5

int queue[size];
int front = -1, rear = -1;

int isEmpty() {
    return (front == -1);
}

int isFull() {
    return ((rear + 1) % size == front);
}

// Enqueue
void enqueue(int value) {
    if (isFull()) {
        printf("Overflow!\n");
        return;
    }

    if (isEmpty())
        front = 0;

    rear = (rear + 1) % size;
    queue[rear] = value;

    printf("%d inserted\n", value);
}

// Dequeue
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow!\n");
        return;
    }

    printf("%d removed\n", queue[front]);

    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % size;
}

// Display
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }

    int i = front;
    printf("Queue: ");

    while (1) {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % size;
    }

    printf("\n");
}

int main() {
    int choice, val;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                enqueue(val);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Wrong option!\n");
        }
    }
}
