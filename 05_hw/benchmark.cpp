//#include "stack.h"
//#include <stdio.h>
//#include <time.h>
//
//#define NUM_ITERATIONS 1000000  // Количество итераций для тестирования
//
//// Функция для бенчмарка push
//void benchmarkPush() {
//    Stack stack;
//    initStack(&stack);  // Инициализация стека
//
//    clock_t start_time = clock();  // Начало измерения времени
//
//    // Выполнение NUM_ITERATIONS операций push
//    for (int i = 0; i < NUM_ITERATIONS; ++i) {
//        push(&stack, i);
//    }
//
//    clock_t end_time = clock();  // Конец измерения времени
//
//    // Вычисление времени выполнения в секундах
//    double duration = (double)(end_time - start_time) / CLOCKS_PER_SEC;
//    printf("Push benchmark for %d iterations: %.6f seconds\n", NUM_ITERATIONS, duration);
//
//    destroyStack(&stack);  // Освобождение памяти стека
//}
//
//// Функция для бенчмарка pop
//void benchmarkPop() {
//    Stack stack;
//    initStack(&stack);  // Инициализация стека
//
//    // Наполняем стек значениями для бенчмарка
//    for (int i = 0; i < NUM_ITERATIONS; ++i) {
//        push(&stack, i);
//    }
//
//    clock_t start_time = clock();  // Начало измерения времени
//
//    // Выполнение NUM_ITERATIONS операций pop
//    for (int i = 0; i < NUM_ITERATIONS; ++i) {
//        pop(&stack);
//    }
//
//    clock_t end_time = clock();  // Конец измерения времени
//
//    // Вычисление времени выполнения в секундах
//    double duration = (double)(end_time - start_time) / CLOCKS_PER_SEC;
//    printf("Pop benchmark for %d iterations: %.6f seconds\n", NUM_ITERATIONS, duration);
//
//    destroyStack(&stack);  // Освобождение памяти стека
//}
//
//int main() {
//    printf("Starting benchmarks...\n");
//
//    // Бенчмарки для push и pop
//    benchmarkPush();
//    benchmarkPop();
//
//    return 0;
//}