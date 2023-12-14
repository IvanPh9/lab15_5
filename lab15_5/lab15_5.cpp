#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale>

int main() {
    setlocale(LC_CTYPE, "ukr"); //Українізація

    int size, i; // Змінні для розміру масиву та індексу циклу
    printf("Введiть розмiр масиву\n"); // Повідомлення користувачеві
    scanf_s("%d", &size); // Введення розміру масиву від користувача

    // Виділення пам'яті для масиву
    int* array = (int*)malloc(size * sizeof(int));

    printf("Введiть елементи масиву\n");
    // Заповнення масиву елементами, введеними користувачем
    for (i = 0; i < size; i++) {
        printf("Елемент %d: ", i + 1);
        scanf_s("%i", &array[i]);
    }

    printf("Елементи масиву у зворотньому порядку: ");
    // Виведення елементів масиву у зворотньому порядку
    for (i = size - 1; i >= 0; i--) {
        printf("[%i] ", array[i]);
    }

    free(array); // Звільнення пам'яті
    return 0;
}
