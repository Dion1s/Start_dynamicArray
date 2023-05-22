#ifndef LIST_H
#define LIST_H
#include <iostream>

struct List {
    int* array;
    int size;
};

List createEmptyArray();
void addElement(List& list, int element);
void insertElement(List& list, int element, int position);
void deleteElement(List& list, int position);
int* getArray(List& list);
int getElement(List& list, int position);
void clearArray(List& list);
void printMenu();

#endif
