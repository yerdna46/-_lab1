#include "stack.h"
#include <stdio.h>

int main() {
    Stack stack;
    initStack(&stack);

    // Добавляем элементы в стек
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("After adding elements : \n");
    traverseStack(&stack);

    // Удаляем элемент из стека
    pop(&stack);

    printf("After popping an element:\n");
    traverseStack(&stack);

    // Поиск элемента по значению
    Node* searchResult = searchByValue(&stack, 20);
    if (searchResult != NULL) {
        printf("Element with value 20 found.\n");
    }
    else {
        printf("Element with value 20 not found.\n");
    }

    // Получение верхнего элемента
    Node* topElement = getTop(&stack);
    if (topElement != NULL) {
        printf("Top element: %d\n", topElement->data);
    }

    // Освобождение памяти
    destroyStack(&stack);

    return 0;
}