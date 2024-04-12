#include <iostream>

void bubbleSort(int array[], int size) {
    int temp = 0;
    for (int i = 0; i <= size - 1; i++) {
        for (int j = 0; j <= size - 1 - i; j++) {
            if (array[j - 1] > array[j]) {
                std::swap(array[j - 1], array[j]);
            }
        }
    }
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << array[i] << " | ";
    std::cout << std::endl;
}



int main()
{
    int tab[] = { 21 , 57,  54, 92, 89, 24, 99, 19, 20, 63 };
    int size = sizeof(tab) / sizeof(int);
    std::cout << "Wprowadz liczbe elementow do posortowania: " << std::endl;
    std::cin >> size;

    if (size > sizeof(tab) / sizeof(int)) {
        size = sizeof(tab) / sizeof(int);
    }

    std::cout << "Tablica przed posortowaniem: " << std::endl;
    printArray(tab, size);
    std::cout << "Rozpoczecie sortowania" << std::endl;
    std::cout << "Tablica po sortowaniu: " << std::endl;
    bubbleSort(tab, size);
    printArray(tab, size);
}