// DiemTHPTQG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"sortDecending.h"


int main()
{
    vector<THPTQG> a;   //2
    readCSV(a);
    sortDescendingkhoiB(a);
    writeExport(a);
}
