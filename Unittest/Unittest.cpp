// gtest_stack.cpp
#include "stack.h"
#include <gtest/gtest.h>


// Тест на инициализацию стека
TEST(StackTest, Initialization) {
    Stack stack;
    initStack(&stack);
    EXPECT_TRUE(isEmpty(&stack));
    destroyStack(&stack);
}

// Тест на добавление элементов в стек
TEST(StackTest, PushElements) {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    EXPECT_EQ(getTop(&stack)->data, 30);

    destroyStack(&stack);
}

// Тест на удаление элемента из стека
TEST(StackTest, PopElement) {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    pop(&stack);

    EXPECT_EQ(getTop(&stack)->data, 20);

    destroyStack(&stack);
}

// Тест на поиск элемента по значению
TEST(StackTest, SearchByValue) {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    Node* found = searchByValue(&stack, 20);
    EXPECT_NE(found, nullptr);
    EXPECT_EQ(found->data, 20);

    Node* notFound = searchByValue(&stack, 40);
    EXPECT_EQ(notFound, nullptr);

    destroyStack(&stack);
}

// Тест на поиск элемента по индексу
TEST(StackTest, SearchByIndex) {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    Node* found = searchByIndex(&stack, 1);
    EXPECT_NE(found, nullptr);
    EXPECT_EQ(found->data, 20);

    Node* outOfRange = searchByIndex(&stack, 5);
    EXPECT_EQ(outOfRange, nullptr);

    destroyStack(&stack);
}

// Тест на проверку пустого стека
TEST(StackTest, IsEmpty) {
    Stack stack;
    initStack(&stack);

    EXPECT_TRUE(isEmpty(&stack));

    push(&stack, 10);
    EXPECT_FALSE(isEmpty(&stack));

    pop(&stack);
    EXPECT_TRUE(isEmpty(&stack));

    destroyStack(&stack);
}

// Тест на обход и вывод элементов стека
TEST(StackTest, TraverseStack) {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    testing::internal::CaptureStdout();
    traverseStack(&stack);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Stack elements: 30 20 10 \n");

    destroyStack(&stack);
}

// Тест на уничтожение стека
TEST(StackTest, DestroyStack) {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);

    destroyStack(&stack);
    EXPECT_TRUE(isEmpty(&stack));
}
