// DiemTHPTQG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"sortDecending.h"


int main()
{
    vector<THPTQG> a;
    readCSV(a);
    sortDescendingkhoiD(a);
    writeExport(a);
}
