#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// �������� ������ ����
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Error: failed to allocate memory for new node.\n\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// ������������� �����
void initStack(Stack* stack) {
    stack->top = NULL;
}

// ����������� �����
void destroyStack(Stack* stack) {
    Node* current = stack->top;
    while (current != NULL) {
        Node* tmp = current;
        current = current->next;
        free(tmp);
    }
    stack->top = NULL; // ��������� ��������� �� �������
}

// ���������� �������� � ����
void push(Stack* stack, int data) {
    Node* newNode = createNode(data);
    if (newNode == NULL) return; // �������� ��������� ��������� ������
    newNode->next = stack->top;
    stack->top = newNode;
}

// �������� �������� �� �����
void pop(Stack* stack) {
    if (stack->top == NULL) {
        fprintf(stderr, "Error: attempt to pop from an empty stack.\n");
        return;
    }
    Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp); // ������������ ������ ���������� ����
}

// ����� ���� �� ��������
Node* searchByValue(Stack* stack, int value) {
    Node* current = stack->top;
    while (current != NULL) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return NULL; // ���� �������� �� �������
}

// ����� ���� �� �������
Node* searchByIndex(Stack* stack, int index) {
    Node* current = stack->top;
    int count = 0;
    while (current != NULL) {
        if (count == index) {
            return current;
        }
        count++;
        current = current->next;
    }
    return NULL; // ���� ������ ��� ���������
}

// ��������� �������� �������� �����
Node* getTop(Stack* stack) {
    return stack->top;
}

// ����� ����� � ����� ���������
void traverseStack(Stack* stack) {
    Node* current = stack->top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// ��������, ���� �� ����
bool isEmpty(Stack* stack) {
    return stack->top == NULL;
}
