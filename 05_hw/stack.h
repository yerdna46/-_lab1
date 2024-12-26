#pragma once

#include <stdbool.h>

// Узел стека
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Структура стека
typedef struct Stack {
    Node* top; // Указатель на вершину стека
} Stack;

#ifdef __cplusplus
extern "C" {
#endif

    // Создание нового узла
    Node* createNode(int data);

    // Инициализация стека
    void initStack(Stack* stack);

    // Уничтожение стека и освобождение памяти
    void destroyStack(Stack* stack);

    // Добавление элемента в стек
    void push(Stack* stack, int data);

    // Удаление элемента из стека
    void pop(Stack* stack);

    // Поиск узла по значению
    Node* searchByValue(Stack* stack, int value);

    // Поиск узла по индексу
    Node* searchByIndex(Stack* stack, int index);

    // Получение верхнего элемента стека
    Node* getTop(Stack* stack);

    // Обход стека и вывод элементов
    void traverseStack(Stack* stack);

    // Проверка, пуст ли стек
    bool isEmpty(Stack* stack);

#ifdef __cplusplus
}
#endif