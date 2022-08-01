#pragma once

class Sorter
{
private:
    int maxFirst;
    int maxSecond;
    int maxThird;
    int i;
    int x;
    int temp;

public:
    int firstList[5] = { 0 };
    int secondList[25] = { 0 };
    int thirdList[100] = { 0 };
  
    // Constructor & Destructor
    Sorter();
    ~Sorter();

    // Member Functions
    void FillContents();
    void DisplayContents();
    void SortContents();
};