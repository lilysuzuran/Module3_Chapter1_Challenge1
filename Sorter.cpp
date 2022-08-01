#include <iostream>
#include "Sorter.h"

// Constructor & Destructor

Sorter::Sorter()
    : maxFirst(5)
    , maxSecond(25)
    , maxThird(100)
    , i(0)
    , temp(0)
    , x(0)
{
}

Sorter::~Sorter()
{
}

void Sorter::FillContents()
{
    // Filling All Three Arrays
    for (i = 0; i < maxFirst; i += 1)
    {
        firstList[i] = rand() % 100 + 1;
    }

    for (i = 0; i < maxSecond; i += 1)
    {
        secondList[i] = rand() % 100 + 1;
    }

    for (i = 0; i < maxThird; i += 1)
    {
        thirdList[i] = rand() % 100 + 1;
    }
}

void Sorter::DisplayContents()
{
    // Displaying All Three Arrays
    std::cout << "\nFirst List contents: ";
    for (i = 0; i < maxFirst; i += 1)
    {
        std::cout << firstList[i] << " ";
    }

    std::cout << "\nSecond list contents: ";
    for (i = 0; i < maxSecond; i += 1)
    {
        std::cout << secondList[i] << " ";
    }

    std::cout << "\nThird list contents: ";
    for (i = 0; i < maxThird; i += 1)
    {
        std::cout << thirdList[i] << " ";
    }

}

void Sorter::SortContents()
{

    // firstList
    x = 0;
    i = 0;

    do 
    {       
        do 
        {
            if (firstList[i] < firstList[x])
            {
                temp = firstList[i];
                firstList[i] = firstList[x];
                firstList[x] = temp;
            }

            x = x + 1;
        }   while (x < maxFirst);
        x = 0;      // Resetting for next loop

        i = i + 1;
    }   while (i < maxFirst);
    i = 0;          // Resetting for next loop


    // secondList
    x = 0;
    i = 0;

    do
    {
        do
        {
            if (secondList[i] < secondList[x])
            {
                temp = secondList[i];
                secondList[i] = secondList[x];
                secondList[x] = temp;
            }

            x = x + 1;
        } while (x < maxSecond);
        x = 0;      // Resetting for next loop

        i = i + 1;
    } while (i < maxSecond);
    i = 0;          // Resetting for next loop


    // thirdList
    x = 0;
    i = 0;

    do
    {
        do
        {
            if (thirdList[i] < thirdList[x])
            {
                temp = thirdList[i];
                thirdList[i] = thirdList[x];
                thirdList[x] = temp;
            }

            x = x + 1;
        } while (x < maxThird);
        x = 0;      // Resetting for next loop

        i = i + 1;
    } while (i < maxThird);
    i = 0;          // Resetting for next loop
}
