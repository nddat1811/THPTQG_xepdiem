#pragma once

#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include"tinhSum.h"

using namespace std;
struct THPTQG {
    string SBD;
    float Math;
    float Literature;
    float English;
    float Physical;
    float Chemistry;
    float Biology;
    float History;
    float Geography;
    float GDCD;
    float khoiA;
    float khoiA1;
    float khoiB;
    float khoiD;
};


void readCSV(vector<THPTQG>& a);
void writeExport(vector<THPTQG> a);