#include "list.h"


List createEmptyArray() {
    List list;
    list.array = nullptr;
    list.size = 0;
    return list;
}

void addElement(List& list, int element) {
    int* newArray = new int[list.size + 1];
    for (int i = 0; i < list.size; i++) {
        newArray[i] = list.array[i];
    }
    newArray[list.size] = element;

    delete[] list.array;
    list.array = newArray;
    list.size++;
}

void insertElement(List& list, int element, int position) {
    if (position < 0 || position > list.size)
        return;

    int* newArray = new int[list.size + 1];
    int j = 0;
    for (int i = 0; i < list.size + 1; i++) {
        if (i == position) {
            newArray[i] = element;
        }
        else {
            newArray[i] = list.array[j];
            j++;
        }
    }

    delete[] list.array;
    list.array = newArray;
    list.size++;
}

void deleteElement(List& list, int position) {
    if (position < 0 || position >= list.size)
        return;

    int* newArray = new int[list.size - 1];
    int j = 0;
    for (int i = 0; i < list.size; i++) {
        if (i != position) {
            newArray[j] = list.array[i];
            j++;
        }
    }

    delete[] list.array;
    list.array = newArray;
    list.size--;
}

int* getArray(List& list) {
    return list.array;
}

int getElement(List& list, int position) {
    if (position < 0 || position >= list.size)
        return 0;

    return list.array[position];
}

void clearArray(List& list) {
    delete[] list.array;
    list.array = nullptr;
    list.size = 0;
}

void printMenu() {
    std::cout << "===== MENU =====" << std::endl;
    std::cout << "1. Add element to the end" << std::endl;
    std::cout << "2. Insert element at a position" << std::endl;
    std::cout << "3. Delete element at a position" << std::endl;
    std::cout << "4. Get array" << std::endl;
    std::cout << "5. Get element at a position" << std::endl;
    std::cout << "6. Clear array" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "================" << std::endl;
    std::cout << "Enter your choice: ";
}