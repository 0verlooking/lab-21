#include <iostream>

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
T findMaximum(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
T findMinimum(T arr[], int size) {
    T min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    // Приклад використання шаблонів функцій
    int intArray[] = {5, 2, 9, 1, 3};
    int intArraySize = sizeof(intArray) / sizeof(int);

    bubbleSort(intArray, intArraySize);

    std::cout << "Sorted array: ";
    for (int i = 0; i < intArraySize; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Maximum: " << findMaximum(intArray, intArraySize) << std::endl;
    std::cout << "Minimum: " << findMinimum(intArray, intArraySize) << std::endl;

    // Приклад для масиву з реальними числами
    double doubleArray[] = {3.14, 2.71, 1.618, 0.577};
    int doubleArraySize = sizeof(doubleArray) / sizeof(double);

    bubbleSort(doubleArray, doubleArraySize);

    std::cout << "Sorted array: ";
    for (int i = 0; i < doubleArraySize; ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Maximum: " << findMaximum(doubleArray, doubleArraySize) << std::endl;
    std::cout << "Minimum: " << findMinimum(doubleArray, doubleArraySize) << std::endl;

    return 0;
}