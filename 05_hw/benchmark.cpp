//#include "stack.h"
//#include <stdio.h>
//#include <time.h>
//
//#define NUM_ITERATIONS 1000000  // ���������� �������� ��� ������������
//
//// ������� ��� ��������� push
//void benchmarkPush() {
//    Stack stack;
//    initStack(&stack);  // ������������� �����
//
//    clock_t start_time = clock();  // ������ ��������� �������
//
//    // ���������� NUM_ITERATIONS �������� push
//    for (int i = 0; i < NUM_ITERATIONS; ++i) {
//        push(&stack, i);
//    }
//
//    clock_t end_time = clock();  // ����� ��������� �������
//
//    // ���������� ������� ���������� � ��������
//    double duration = (double)(end_time - start_time) / CLOCKS_PER_SEC;
//    printf("Push benchmark for %d iterations: %.6f seconds\n", NUM_ITERATIONS, duration);
//
//    destroyStack(&stack);  // ������������ ������ �����
//}
//
//// ������� ��� ��������� pop
//void benchmarkPop() {
//    Stack stack;
//    initStack(&stack);  // ������������� �����
//
//    // ��������� ���� ���������� ��� ���������
//    for (int i = 0; i < NUM_ITERATIONS; ++i) {
//        push(&stack, i);
//    }
//
//    clock_t start_time = clock();  // ������ ��������� �������
//
//    // ���������� NUM_ITERATIONS �������� pop
//    for (int i = 0; i < NUM_ITERATIONS; ++i) {
//        pop(&stack);
//    }
//
//    clock_t end_time = clock();  // ����� ��������� �������
//
//    // ���������� ������� ���������� � ��������
//    double duration = (double)(end_time - start_time) / CLOCKS_PER_SEC;
//    printf("Pop benchmark for %d iterations: %.6f seconds\n", NUM_ITERATIONS, duration);
//
//    destroyStack(&stack);  // ������������ ������ �����
//}
//
//int main() {
//    printf("Starting benchmarks...\n");
//
//    // ��������� ��� push � pop
//    benchmarkPush();
//    benchmarkPop();
//
//    return 0;
//}