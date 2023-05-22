#include "list.h"

int main() {
    List list = createEmptyArray();

    int choice;
    do {
        printMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int element;
            std::cout << "Enter the element to add: ";
            std::cin >> element;
            addElement(list, element);
            break;
        }
        case 2: {
            int element, position;
            std::cout << "Enter the element to insert: ";
            std::cin >> element;
            std::cout << "Enter the position to insert at: ";
            std::cin >> position;
            insertElement(list, element, position);
            break;
        }
        case 3: {
            int position;
            std::cout << "Enter the position to delete: ";
            std::cin >> position;
            deleteElement(list, position);
            break;
        }
        case 4: {
            int* array = getArray(list);
            std::cout << "Array: ";
            for (int i = 0; i < list.size; i++) {
                std::cout << array[i] << " ";
            }
            std::cout << std::endl;
            break;
        }
        case 5: {
            int position;
            std::cout << "Enter the position to get the element: ";
            std::cin >> position;
            int element = getElement(list, position);
            std::cout << "Element at position " << position << ": " << element << std::endl;
            break;
        }
        case 6: {
            clearArray(list);
            std::cout << "Array cleared." << std::endl;
            break;
        }
        case 0:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Try again." << std::endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
