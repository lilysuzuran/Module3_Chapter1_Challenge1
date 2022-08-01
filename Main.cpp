#include <iostream>
#include <chrono>
#include "Sorter.h"

void NumberTime();

int main()
{
    NumberTime();
}

void NumberTime()
{
    // Seeding rand() and initializing classes
    srand(time(nullptr));
    Sorter* List = new Sorter();

    // Carrying out Class Functions
    std::cout << "\n\nPre-Sorted Arrays: ";
    List->FillContents();
    List->DisplayContents();

    std::cout << "\n\nPost-Sorted Arrays: ";
    List->SortContents();
    List->DisplayContents();
 
    std::cout << "\n\n";

    // Cleaning up pointers
    delete List;
    List = nullptr;
}

